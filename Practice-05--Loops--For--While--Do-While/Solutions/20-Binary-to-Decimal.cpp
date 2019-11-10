/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 20-Binary-to-Decimal.cpp
 * @brief Solution for Problem 20 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative binary number
 * and print the decimal representation.
 */

#include <iostream>

int main()
{
    long long binaryNum;
    int decimalNum = 0;
    do {
        std::cout << "Enter a whole non-negative binary number: ";
        std::cin >> binaryNum;
    } while (binaryNum < 0);

    short value = 1;
    while (binaryNum > 0)
    {
        short digit = binaryNum % 10;
        if (digit > 1) {
            std::cout << "Not a binary number!" << std::endl;
            return 1;
        }

        decimalNum += digit * value;
        value <<= 1;
        binaryNum /= 10;
    }

    std::cout << decimalNum;

    return 0;
}
