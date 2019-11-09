/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Print-0-to-N.cpp
 * @brief Solution for Problem 2 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number N
 * and print the numbers from 1 to N.
 */

#include <iostream>

int main() {

    int num;
    std::cin >> num;

    if (num < 0) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    for (int i = 0; i <= num; i++)
        std::cout << i << ' ';

    return 0;
}
