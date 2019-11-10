/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 21-Decimal-to-Octal.cpp
 * @brief Solution for Problem 21 from Practice 5
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Problem:
 * Read a whole non-negative decimal number
 * and print the octal representation.
 */

#include <iostream>

int main()
{
    int decimalNum;
    int octalNum = 0;
    std::cin >> decimalNum;

    int i = 1;
    while (decimalNum > 0)
    {
        octalNum += (decimalNum % 8) * i;
        decimalNum /= 8;
        i *= 10;
    }

    std::cout << octalNum << std::endl;

    return 0;
}
