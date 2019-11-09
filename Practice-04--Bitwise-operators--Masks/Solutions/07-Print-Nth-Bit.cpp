/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 07-Print-Nth-Bit.cpp
 * @brief Solution for Problem 7 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number and a number
 *  N in the range [0, 31] and print its Nth bit.
 */

#include <iostream>

using namespace std;

int main()
{
    const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;

    unsigned int num;
    short N;
    cout << "Number: ";
    cin >> num;
    cout << "Bit position [0, " << (SIZE_OF_UNS_INT - 1) << "]: ";
    cin >> N;

    if (N < 0 || N >= SIZE_OF_UNS_INT) {
        cout << "Invalid bit position!\n";
        return 1;
    }

    // Маска с единица на N-тия бит
    unsigned int mask = 1 << N;

    if ((num & mask) == 0)
        cout << '0';
    else
        cout << '1';

    return 0;
}
