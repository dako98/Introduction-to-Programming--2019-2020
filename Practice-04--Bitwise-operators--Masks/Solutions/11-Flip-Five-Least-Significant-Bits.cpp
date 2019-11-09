/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 11-Flip-Five-Least-Significant-Bits.cpp
 * @brief Solution for Problem 11 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative and flip its five LSBs.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cout << "Number: ";
    cin >> num;

    unsigned int mask = 1;  // 00...00001
    mask = (mask << 1) | 1; // 00...00011
    mask = (mask << 1) | 1; // 00...00111
    mask = (mask << 1) | 1; // 00...01111
    mask = (mask << 1) | 1; // 00...11111

    num = num ^ mask;

    cout << num;

    return 0;
}
