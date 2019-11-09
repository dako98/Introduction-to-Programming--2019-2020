/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 13-Is-It-A-Power-Of-Two.cpp
 * @brief Solution for Problem 13 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative and a number
 * check wheter it's a power of two or not.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;

    if (num != 0 && (num & (num - 1)) == 0)
        cout << "It's a power of two.\n";
    else
        cout << "It's NOT a power of two.\n";

    return 0;
}
