/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 16-Factorial.cpp
 * @brief Solution for Problem 16 from Practice 5
 * @author Alexander Dimitrov
 * @author Todor Todorov
 *
 * Problem:
 * Read a whole non-negative number N
 * and print N factorial.
 */

#include <iostream>

int main()
{
    int num;
    do {
        std::cout << "Enter a non-negative number: ";
        std::cin >> num;
    } while (num < 0);

    unsigned res = 1;
    for (int i = 2; i <= num; i++)
        res *= i;

    std::cout << res << std::endl;

    return 0;
}
