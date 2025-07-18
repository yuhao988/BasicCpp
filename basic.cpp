#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm> // for std::sort
#include <stdexcept> // for exceptions
#include "Data.h"
#include <vector>
#include <limits>

std::vector<ClassInfo> InitializeClasses();
std::vector<Character> InitializeCharacters();

//  Basic Function
int getStat(int base, double charGrw, double classGrw, int classMod, int lv)
{
    double growth = (charGrw + classGrw) * (lv - 1);
    return static_cast<int>(base + (growth) + classMod); // Direct truncation
}

//  Template Function
template <typename T>
T max(T a, T b, T c, T d)
{
    return std::max({a, b, c, d});
}

// -----  Variables & Types -----
int lv;

ClassInfo &selectClass()
{
    static std::vector<ClassInfo> allClasses = InitializeClasses();
    std::string className;

    while (true)
    {
        std::cout << "Enter class name: ";
        std::cin >> className;

        auto it = std::find_if(allClasses.begin(), allClasses.end(),
                               [&className](const ClassInfo &cls)
                               {
                                   return cls.getName() == className;
                               });

        if (it != allClasses.end())
        {
            return *it;
        }

        std::cout << "Invalid class! Please try again.\n\n";
    }
};

int main()
{
    // -----  Error Handling -----
    try
    {
        // ----- Class Selection -----
        ClassInfo &selectedClass = selectClass();
        do
        {
            std::cout << "Enter level (25-99): ";
            std::cin >> lv;
            if (std::cin.fail() || lv < 25 || lv >= 100)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input! Please enter an integer between 25 and 99.\n";
            }
        } while (lv < 25 || lv >= 100);
        static std::vector<Character> allChars = InitializeCharacters();
        std::cout << "Lv. " << lv << " " << selectedClass.getName() << ":\n";

        //-----  File I/O -----
        std::string filename = "ClassStats/"+selectedClass.getName() + ".txt";
        std::ofstream file(filename);
        if (file.is_open())
        {
            file << "Character Stats for " << selectedClass.getName() << " at Lv. " << lv << ":\n";
            std::string maxHP;
            int maxhp = 0;
            std::string maxMgt;
            int maxmgt = 0;
            std::string maxSpd;
            int maxspd = 0;
            std::string maxDex;
            int maxdex = 0;
            std::string maxDef;
            int maxdef = 0;
            std::string maxFrt;
            int maxfrt = 0;
            std::string maxMas;
            int maxmas = 0;
            std::string maxLck;
            int maxlck = 0;
            std::string minHP;
            int minhp = 0;
            std::string minMgt;
            int minmgt = 0;
            std::string minSpd;
            int minspd = 0;
            std::string minDex;
            int mindex = 0;
            std::string minDef;
            int mindef = 0;
            std::string minFrt;
            int minfrt = 0;
            std::string minMas;
            int minmas = 0;
            std::string minLck;
            int minlck = 0;
            for (const auto &cha : allChars)
            {
                if (cha.getCLine() == selectedClass.getClassline())
                {
                    std::cout << cha.getName() << " HP: " << getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv) << ", ";
                    if (getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv) > maxhp)
                    {
                        maxhp = getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv);
                        maxHP = cha.getName();
                    }
                    if (getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv) < minhp || minhp == 0)
                    {
                        minhp = getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv);
                        minHP = cha.getName();
                    }
                    std::cout << "Mgt: " << getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv) << ", ";
                    if (getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv) > maxmgt)
                    {
                        maxmgt = getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv);
                        maxMgt = cha.getName();
                    }
                    if (getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv) < minmgt || minmgt == 0)
                    {
                        minmgt = getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv);
                        minMgt = cha.getName();
                    }
                    std::cout << "Spd: " << getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv) << ", ";
                    if (getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv) > maxspd)
                    {
                        maxspd = getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv);
                        maxSpd = cha.getName();
                    }
                    if (getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv) < minspd || minspd == 0)
                    {
                        minspd = getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv);
                        minSpd = cha.getName();
                    }
                    std::cout << "Dex: " << getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv) << ", ";
                    if (getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv) > maxdex)
                    {
                        maxdex = getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv);
                        maxDex = cha.getName();
                    }
                    if (getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv) < mindex || mindex == 0)
                    {
                        mindex = getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv);
                        minDex = cha.getName();
                    }
                    std::cout << "Def: " << getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv) << ", ";
                    if (getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv) > maxdef)
                    {
                        maxdef = getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv);
                        maxDef = cha.getName();
                    }
                    if (getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv) < mindef || mindef == 0)
                    {
                        mindef = getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv);
                        minDef = cha.getName();
                    }
                    std::cout << "Frt: " << getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv) << ", ";
                    if (getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv) > maxfrt)
                    {
                        maxfrt = getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv);
                        maxFrt = cha.getName();
                    }
                    if (getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv) < minfrt || minfrt == 0)
                    {
                        minfrt = getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv);
                        minFrt = cha.getName();
                    }
                    std::cout << "Mas: " << getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv) << ", ";
                    if (getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv) > maxmas)
                    {
                        maxmas = getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv);
                        maxMas = cha.getName();
                    }
                    if (getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv) < minmas || minmas == 0)
                    {
                        minmas = getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv);
                        minMas = cha.getName();
                    }
                    std::cout << "Lck: " << getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv) << "\n";
                    if (getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv) > maxlck)
                    {
                        maxlck = getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv);
                        maxLck = cha.getName();
                    }
                    if (getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv) < minlck || minlck == 0)
                    {
                        minlck = getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv);
                        minLck = cha.getName();
                    }
                    file << cha.getName() << " HP: " << getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv) << ", ";
                    file << "Mgt: " << getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv) << ", ";
                    file << "Spd: " << getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv) << ", ";
                    file << "Dex: " << getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv) << ", ";
                    file << "Def: " << getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv) << ", ";
                    file << "Frt: " << getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv) << ", ";
                    file << "Mas: " << getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv) << ", ";
                    file << "Lck: " << getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv) << "\n";
                }
                else
                {
                    continue;
                }
            }
            file << "\nMin-Max Stats:\n";
            file << "HP: " << minHP << " " << minhp << " - " << maxHP << " " << maxhp << "\n";
            file << "Mgt: " << minMgt << " " << minmgt << " - " << maxMgt << " " << maxmgt << "\n";
            file << "Spd: " << minSpd << " " << minspd << " - " << maxSpd << " " << maxspd << "\n";
            file << "Dex: " << minDex << " " << mindex << " - " << maxDex << " " << maxdex << "\n";
            file << "Def: " << minDef << " " << mindef << " - " << maxDef << " " << maxdef << "\n";
            file << "Frt: " << minFrt << " " << minfrt << " - " << maxFrt << " " << maxfrt << "\n";
            file << "Mas: " << minMas << " " << minmas << " - " << maxMas << " " << maxmas << "\n";
            file << "Lck: " << minLck << " " << minlck << " - " << maxLck << " " << maxlck << "\n";
            file.close();
        }
        else
        {
            std::cerr << "Failed to open file!\n";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    // ----- 2. Control Structures -----

    // ----- 3. STL Containers -----

    // ----- 7. Templates -----
    // std::cout << "Max (5, 9): " << max(5, 9) << "\n";
    // std::cout << "Max (3.14, 2.71): " << max(3.14, 2.71) << "\n";

    return 0;
}