#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm> // for std::find_if
#include <map>
#include <stdexcept> // for exceptions
#include "Data.h"
#include <vector>
#include <limits>


std::vector<ClassInfo> InitializeClasses();
std::vector<Character> InitializeCharacters();

Character &selectChar()
{
    static std::vector<Character> allChar = InitializeCharacters();
    std::string charName;

    while (true)
    {
        std::cout << "Enter unit name: ";
        std::cin >> charName;

        auto it = std::find_if(allChar.begin(), allChar.end(),
                               [&charName](const Character &cls)
                               {
                                   return cls.getName() == charName;
                               });

        if (it != allChar.end())
        {
            return *it;
        }

        std::cout << "Invalid character! Please try again.\n\n";
    }
};

std::string getStat(int base, double charGrw, double classGrw, int classMod, int lv)
{
    double growth = (charGrw + classGrw) * (lv - 1);
    int result = static_cast<int>(base + (growth) + classMod); // Direct truncation
    if (result < 10)
    {
        return " " + std::to_string(result);
    }
    else
    {
        return std::to_string(result);
    }
};

int main()
{
    try
    {
        // ----- Class Selection -----        
        static std::vector<ClassInfo> allClass = InitializeClasses();
        Character &selChar = selectChar();

        std::map<std::string, std::vector<std::string>> characterStatsMap;

        std::string filename = "CharProgression/" + selChar.getName() + ".txt";
        std::ofstream file(filename);
        if (file.is_open())
        {
            file << "\nCharacter Stats Map:\n";
            for (const auto &cla : allClass)

            {
                if (selChar.getCLine() == cla.getClassline())
                {
                    file << "Class: " << cla.getName() << "\n";
                    for (int lv = 5; lv <= 50; lv += 5)
                    {
                        std::string Level;
                        if (lv < 10)
                        {
                            Level = "Lv. 0" + std::to_string(lv);
                        }
                        else
                        {
                            Level = "Lv. " + std::to_string(lv);
                        }

                        characterStatsMap[Level] =
                            {
                                getStat(selChar.getHP(), selChar.getHPGrw(), cla.getHPGrow(), cla.getHPMod(), lv),
                                getStat(selChar.getMight(), selChar.getMightGrw(), cla.getMgtGrow(), cla.getMgtMod(), lv),
                                getStat(selChar.getSpeed(), selChar.getSpeedGrw(), cla.getSpdGrow(), cla.getSpdMod(), lv),
                                getStat(selChar.getDexterity(), selChar.getDexterityGrw(), cla.getDexGrow(), cla.getDexMod(), lv),
                                getStat(selChar.getDefense(), selChar.getDefenseGrw(), cla.getDefGrow(), cla.getDefMod(), lv),
                                getStat(selChar.getFortitude(), selChar.getFortitudeGrw(), cla.getFrtGrow(), cla.getFrtMod(), lv),
                                getStat(selChar.getMastery(), selChar.getMasteryGrw(), cla.getMasGrow(), cla.getMasMod(), lv),
                                getStat(selChar.getLuck(), selChar.getLuckGrw(), cla.getLckGrow(), cla.getLckMod(), lv)};
                    }

                    for (const auto &[level, stats] : characterStatsMap)
                    {
                        file << level << ": [";
                        for (std::string val : stats)
                        {
                            file << val << " ";
                        }
                        file << "]\n";
                    }
                }
                else
                {
                    continue;
                }
            };
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    return 0;
}