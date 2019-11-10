/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 19-Sum-of-Digits.cpp
 * @brief Solution for Problem 19 from Practice 5
 * @author Dako Dimov
 *
 * Problem:
 * Read a whole non-negative number
 * and print the sum of its digits.
 */

#include <iostream>

int main()
{
    int num, sum = 0;
    do {
        std::cout << "Enter a whole non-negative number: ";
        std::cin >> num;
    } while (num < 0);

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    std::cout << sum;

    return 0;
}
