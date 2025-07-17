#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm> // for std::sort
#include <stdexcept> // for exceptions
#include "Data.h"
#include <vector>

// 1. Basic Function
int add(int a, int b)
{
    return a + b;
}

// 3. Template Function
template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    // ----- 1. Variables & Types -----
    int num = 42;
    double pi = 3.14159;
    char letter = 'A';
    std::string name = "Alice";
    bool is_cpp_fun = true;

    std::cout << "Hello, " << name << "! num = " << num << "\n";

    // ----- 2. Control Structures -----
    if (num > 0)
    {
        std::cout << "Positive number\n";
    }
    else
    {
        std::cout << "Non-positive\n";
    }

    for (int i = 0; i < 3; ++i)
    {
        std::cout << "Loop iteration: " << i << "\n";
    }

    // ----- 3. STL Containers -----
    std::vector<int> numbers = {5, 2, 8, 1};
    numbers.push_back(7);                      // Add element
    std::sort(numbers.begin(), numbers.end()); // Sort

    std::cout << "Sorted vector: ";
    for (int n : numbers)
    {
        std::cout << n << " ";
    }
    std::cout << "\n";

    Character mashal(
        14,                             // ID
        "Mashal",                       // Name
        25, 50,                         // hp and hpGrw
        6, 30,                          // might and mgtGrw
        7, 25,                          // speed and spdGrw
        8, 20,                          // dexterity and dexGrw
        6, 25,                          // defense and defGrw
        2, 20,                          // fortitude and frtGrw
        4, 25,                          // mastery and masGrw
        3, 20,                          // luck and lckGrw
        {18},                           // startingLv (assuming first element is level)
        {"Gale"},                       // startingClass (assuming second element is class)
        {41, 14, 17, 17, 13, 6, 10, 12} // startingStats (remaining numbers)
    );

    // ----- 5. File I/O -----
    std::ofstream file("test.txt");
    if (file.is_open())
    {
        file << "Writing to a file.\n";
        file.close();
    }
    else
    {
        std::cerr << "Failed to open file!\n";
    }

    // ----- 6. Error Handling -----
    try
    {
        if (num == 42)
        {
            throw std::runtime_error("Special number detected!");
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << "\n";
    }

    // ----- 7. Templates -----
    std::cout << "Max (5, 9): " << max(5, 9) << "\n";
    std::cout << "Max (3.14, 2.71): " << max(3.14, 2.71) << "\n";

    return 0;
}