/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 18-Greatest-Common-Divisor.cpp
 * @brief Solution for Problem 18 from Practice 5
 * @author Dako Dimov
 *
 * Problem:
 * Read two whole positive numbers N and M
 * and print their Greatest Common Divisor.
 */

#include <iostream>

int main()
{
    int num1, num2, remainder;
    do {
        std::cout << "Enter two positive whole numbers: ";
        std::cin >> num1 >> num2;
    } while (num1 < 1 || num2 < 1);

    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    do
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    } while (remainder != 0);

    std::cout << num1;

    return 0;
}
