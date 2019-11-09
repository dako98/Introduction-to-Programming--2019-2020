/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 12-Compound-Problem.cpp
 * @brief Solution for Problem 12 from Practice 4
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole non-negative number A and three more numbers
 * n1, n2 and n3 in the range [0, 31] and set A's bits in positions
 * n1, n2 and n3 to 1. Save the result in a new variable B. Save
 * the result of the multiplication of A and B in a new variable C.
 * Print in the console ~C ^ A.
 */

#include <iostream>

using namespace std;

int main()
{
    const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;

    unsigned int numA;
    short n1, n2, n3;
    cout << "Number: ";
    cin >> numA;
    cout << "Three bit positions [0, " << (SIZE_OF_UNS_INT - 1) << "]: ";
    cin >> n1 >> n2 >> n3;

    if (n1 < 0 || n1 >= SIZE_OF_UNS_INT ||
        n2 < 0 || n2 >= SIZE_OF_UNS_INT ||
        n3 < 0 || n3 >= SIZE_OF_UNS_INT)
    {
        cout << "Invalid bit position!\n";
        return 1;
    }

    unsigned int mask = 0;
    mask |= (1 << n1);
    mask |= (1 << n2);
    mask |= (1 << n3);

    unsigned int numB = numA | mask;
    unsigned int numC = numA * numB;

    cout << ~(numC ^ numA);

    return 0;
}
