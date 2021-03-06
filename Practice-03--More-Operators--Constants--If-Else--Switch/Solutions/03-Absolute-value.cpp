/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Absolute-value.cpp
 * @brief Solution for Problem 3 from Practice 3
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Изведете абсолютната стойност на въведено число
 */

#include<iostream>

using namespace std;

int main()
{
    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Абс. стойност чрез тернарен оператор
    unsigned int absValue = num < 0 ? -num : num;

    // Извеждаме на конзолата
    cout << "It's absolute value is: ";
    cout << absValue;

    return 0;
}
