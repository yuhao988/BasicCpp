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

// 1. Basic Function
int getStat(int base, double charGrw, double classGrw, int classMod, int lv)
{
    double growth = (charGrw + classGrw) * (lv - 1);
    return static_cast<int>(base + (growth) + classMod); // Direct truncation
}

// 3. Template Function
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}
int lv;

ClassInfo &selectClass()
{
    static std::vector<ClassInfo> allClasses = InitializeClasses();
    std::string className;

    while (true)
    {
        // std::cout << "Available classes:\n";
        // for (const auto &cls : allClasses)
        // {
        //     std::cout << "- " << cls.getName() << "\n";
        // }

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
    // ----- 1. Variables & Types -----

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
        //----- 5. File I/O -----
        std::ofstream file("Result.txt");
        if (file.is_open())
        {
            file << "Character Stats for " << selectedClass.getName() << " at Lv. " << lv << ":\n";

            for (const auto &cha : allChars)
            {
                if (cha.getCLine() == selectedClass.getClassline())
                {
                    std::cout << cha.getName() << " HP: " << getStat(cha.getHP(), cha.getHPGrw(), selectedClass.getHPGrow(), selectedClass.getHPMod(), lv) << ", ";
                    std::cout << "Mgt: " << getStat(cha.getMight(), cha.getMightGrw(), selectedClass.getMgtGrow(), selectedClass.getMgtMod(), lv) << ", ";
                    std::cout << "Spd: " << getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), lv) << ", ";
                    std::cout << "Dex: " << getStat(cha.getDexterity(), cha.getDexterityGrw(), selectedClass.getDexGrow(), selectedClass.getDexMod(), lv) << ", ";
                    std::cout << "Def: " << getStat(cha.getDefense(), cha.getDefenseGrw(), selectedClass.getDefGrow(), selectedClass.getDefMod(), lv) << ", ";
                    std::cout << "Frt: " << getStat(cha.getFortitude(), cha.getFortitudeGrw(), selectedClass.getFrtGrow(), selectedClass.getFrtMod(), lv) << ", ";
                    std::cout << "Mas: " << getStat(cha.getMastery(), cha.getMasteryGrw(), selectedClass.getMasGrow(), selectedClass.getMasMod(), lv) << ", ";
                    std::cout << "Lck: " << getStat(cha.getLuck(), cha.getLuckGrw(), selectedClass.getLckGrow(), selectedClass.getLckMod(), lv) << "\n";
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

    // ----- 6. Error Handling -----

    // ----- 7. Templates -----
    // std::cout << "Max (5, 9): " << max(5, 9) << "\n";
    // std::cout << "Max (3.14, 2.71): " << max(3.14, 2.71) << "\n";

    return 0;
}