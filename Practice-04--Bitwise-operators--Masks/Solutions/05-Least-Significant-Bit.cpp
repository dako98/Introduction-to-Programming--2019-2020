/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 05-Least-Significant-Bit.cpp
 * @brief Solution for Problem 5 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number and print its LSB.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;
    cout << (num & 1);

    return 0;
}
