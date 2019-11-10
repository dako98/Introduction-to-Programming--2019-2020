 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 22-Palindrome.cpp
 * @brief Solution for Problem 22 from Practice 5
 * @author Todor Todorov
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number
 * and print wheter it's a palindrome.
 */

#include <iostream>

int main()
{
    long long num;
    do {
        std::cout << "Enter a whole non-negative number: ";
        std::cin >> num;
    } while (num < 0);

    unsigned numLength = 0;
    int temp = num;
    while (temp)
    {
        ++numLength;
        temp /= 10;
    }

    long long rev = 0;
    for (int i = 0; i < numLength / 2; i++)
    {
        rev *= 10;
        rev += num % 10;
        num /= 10;
    }

    if (numLength % 2 != 0)
        num /= 10;

    if (num == rev)
        std::cout << "Palindrom" << std::endl;
    else
        std::cout << "Not palindrom" << std::endl;

    std::cout << std::endl;

    return 0;
}
