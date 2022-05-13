/*
Vector Minimum Maximum
Pawelski
5/13/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <vector>

/// <summary>
/// Finds the minimum number within the passed data set.
/// </summary>
/// <param name="n">Data set.</param>
/// <returns>Minimum of the data set.</returns>
int FindMinimum(std::vector<int> n)
{
    int minimum = n[0];
    for (int i = 1; i < n.size(); i++)
    {
        if (n[i] < minimum)
        {
            minimum = n[i];
        }
    }
    return minimum;
}

/// <summary>
/// Fidns the maximum number within the passed data set.
/// </summary>
/// <param name="n">Data set.</param>
/// <returns>Maximum of the data set.</returns>
int FindMaximum(std::vector<int> n)
{
    // Write the code to complete the FindMaximum() function here!
    return 0;
}

int main()
{
    const int SENTINEL = -1;
    int user_input;
    std::vector<int> numbers_vector;

    std::cout << "Enter a positive number (-1 to stop) >> ";
    std::cin >> user_input;
    while (user_input != SENTINEL)
    {
        numbers_vector.push_back(user_input);
        std::cout << "Enter a positive number (-1 to stop) >> ";
        std::cin >> user_input;
    }
    
    std::cout << "Minimum: " << FindMinimum(numbers_vector) << "\n";
    std::cout << "Maximum: " << FindMaximum(numbers_vector) << "\n";
    return 0;
}
