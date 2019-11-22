/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Digit-Swapping.cpp
 * @brief Solution for Sample Problem 02
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole positive number N, another whole positive
 * number K, as well as a whole positive number P in the range [0, 9].
 * Change the K-th digit of the number N to the digit P.
 *     Input: 1234567 3 9    Output: 1294567
 */

#include <iostream>

unsigned long long power10(unsigned short pw)
{
    unsigned long long result = 1;
    for (unsigned short i = 0; i < pw; ++i) {
        result *= 10;
    }
    return result;
}

unsigned short numLength(unsigned long long num)
{
    unsigned short res = 0;
    while (num != 0) {
        num /= 10;
        ++res;
    }
    return res;
}

int main()
{
    unsigned long long num;
    unsigned short k, numLen;
    unsigned short p;

    std::cin >> num >> k >> p;
    numLen = numLength(num);
    k = numLen - k;

    unsigned long long tempPower = power10(k);
    unsigned long long tempDigit = (num / tempDigit) % 10;

    num -= tempDigit * tempPower;
    num += p * tempPower;
    std::cout << num << "\n";

    return 0;
}
