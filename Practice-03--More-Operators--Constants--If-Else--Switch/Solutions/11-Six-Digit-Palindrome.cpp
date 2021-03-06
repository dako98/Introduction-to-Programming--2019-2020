/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 11-Six-Digit-Palindrome.cpp
 * @brief Solution for Problem 11 from Practice 3
 * @author Dako Dimov
 *
 * Задача:
 * Проверете дали въведеното
 * шестцифрено число е палиндром
 */

#include <iostream>

using namespace std;

int main()
{
    // Четем числото
    int num;
    cin >> num;

    // Извличаме единиците, десетиците и стотиците
    short ones, tens, hundreds;
    ones = num % 10;
    tens = num / 10 % 10;
    hundreds = num / 100 % 10;

    // Създаваме числото от последните три цифри, прочетено наобратно
    short reversed = hundreds + 10 * tens + 100 * ones;

    // Проверяваме дали първите три цифри и числото
    // от последните три цифри наобратно са равни
    if (num / 100 == reversed)
        cout << "It's a palindrome.";
    else
        cout << "It's not a palindrome.";

    return 0;
}
