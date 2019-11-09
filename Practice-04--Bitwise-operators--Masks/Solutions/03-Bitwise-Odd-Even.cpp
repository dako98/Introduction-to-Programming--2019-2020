/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Bitwise-Odd-Even.cpp
 * @brief Solution for Problem 3 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number and print whether
 * it's even or not using bitwise operators.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;

    if ((num & 1) == 0)
        cout << "even\n";
    else
        cout << "odd\n";

    return 0;
}
