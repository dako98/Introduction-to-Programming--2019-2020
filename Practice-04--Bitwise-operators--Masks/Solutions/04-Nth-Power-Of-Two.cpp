/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Nth-Power-Of-Two.cpp
 * @brief Solution for Problem 4 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number and print
 * the result of 2 to the power of the number.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int power;
    cin >> power;

    cout << "2 to the power of " << power << " is "
         << (1 << power);

    return 0;
}
