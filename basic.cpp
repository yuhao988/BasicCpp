#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm> // for std::sort
#include <stdexcept> // for exceptions
#include "Data.h"
#include <vector>

std::vector<ClassInfo> InitializeClasses();
std::vector<Character> InitializeCharacters();

// 1. Basic Function
int getStat(int base, double charGrw, double classGrw, int classMod, int lv)
{
    double growth = (charGrw + classGrw) * (lv - 1);
    return base + static_cast<int>(growth) + classMod; // Direct truncation
}

// 3. Template Function
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

ClassInfo &selectClass()
{
    static std::vector<ClassInfo> allClasses = InitializeClasses();
    std::string className;

    while (true)
    {
        std::cout << "Available classes:\n";
        for (const auto &cls : allClasses)
        {
            std::cout << "- " << cls.getName() << "\n";
        }

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
}

int main()
{
    // ----- 1. Variables & Types -----

    try
    {
        // ----- Class Selection -----
        ClassInfo &selectedClass = selectClass();
        static std::vector<Character> allChars = InitializeCharacters();

        for (const auto &cha : allChars)
        {
            std::cout << cha.getName() << " has " << getStat(cha.getSpeed(), cha.getSpeedGrw(), selectedClass.getSpdGrow(), selectedClass.getSpdMod(), 41) << "Speed at level 41 \n";
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }

    // ----- 2. Control Structures -----

    // ----- 3. STL Containers -----
    

    // ----- 5. File I/O -----
    // std::ofstream file("test.txt");
    // if (file.is_open())
    // {
    //     file << "Writing to a file.\n";
    //     file.close();
    // }
    // else
    // {
    //     std::cerr << "Failed to open file!\n";
    // }

    // ----- 6. Error Handling -----

    // ----- 7. Templates -----
    // std::cout << "Max (5, 9): " << max(5, 9) << "\n";
    // std::cout << "Max (3.14, 2.71): " << max(3.14, 2.71) << "\n";

    return 0;
}