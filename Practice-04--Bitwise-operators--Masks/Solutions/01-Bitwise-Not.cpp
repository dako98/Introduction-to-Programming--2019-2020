/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-Bitwise-Not.cpp
 * @brief Solution for Problem 1 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number and print its bitwise inverse.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;
    cout << ~num;

    return 0;
}
