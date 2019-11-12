/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Number-of-digits.cpp
 * @brief Solution for Problem 4 from Practice 3
 * @author Alexander Dimitrov
 *
 * Задача:
 * Изведете броя на цифрите на
 * въведено число без цикли
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    unsigned int numOfDigits = log10(num) + 1;

    // Извеждаме на конзолата
    cout << "Number of digits: ";
    cout << numOfDigits;

    return 0;
}
