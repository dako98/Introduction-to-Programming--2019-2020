/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Most-Significant-Bit.cpp
 * @brief Solution for Problem 6 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number and print its MSB.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;

    // Записваме размера на типа, с който работим в битове
    const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;

    // Маска с единица на най-старшия бит
    unsigned int mask = 1 << (SIZE_OF_UNS_INT - 1);

    if ((num & mask) == 0)
        cout << '0';
    else
        cout << '1';

    return 0;
}
