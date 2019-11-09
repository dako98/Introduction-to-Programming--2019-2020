/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Bitwise-Or.cpp
 * @brief Solution for Problem 2 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a two whole non-negative numbers and print the result
 * of applying bitwise OR on these numbers.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num1, num2;
    cin >> num1 >> num2;
    cout << (num1 | num2);

    return 0;
}
