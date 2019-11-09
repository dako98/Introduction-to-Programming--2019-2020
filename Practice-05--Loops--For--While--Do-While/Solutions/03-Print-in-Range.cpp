/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Print-in-Range.cpp
 * @brief Solution for Problem 3 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read two whole numbers N and M and print
 * all the whole numbers in the range [N, M].
 */

#include <iostream>

int main() {

    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // If the first number is number is larger
    // than the second number we swap them.
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Starting from num1 print num1 and then increment it.
    // Repeat until num1 becomes larger than num2.
    while (num1 <= num2)
        std::cout << num1++ << ' ';

    return 0;
}
