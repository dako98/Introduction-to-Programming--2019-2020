/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 13-Power.cpp
 * @brief Solution for Problem 13 from Practice 5
 * @author Alexander Dimitrov
 * @author Todor Todorov
 *
 * Problem:
 * Read two whole numbers N and M and print
 * the result of N to the power of M.
 */

#include<iostream>

int main()
{
    int num, pow;
    long long res = 1;
    std::cin >> num >> pow;

    if (pow < 0)
    {
        std::cout << "Wrong input!" << std::endl;
        return 1;
    }

    for (int i = 0; i < pow; i++)
        res *= num;

    std::cout << res << std::endl;

    return 0;
}
