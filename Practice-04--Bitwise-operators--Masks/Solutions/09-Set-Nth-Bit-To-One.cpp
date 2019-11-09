/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 08-Set-Nth-Bit-To-One.cpp
 * @brief Solution for Problem 9 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative and a number
 * N in the range [0, 31] and set the number's
 * Nth bit to 1.
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
    num = num | mask;

    cout << num;

    return 0;
}
