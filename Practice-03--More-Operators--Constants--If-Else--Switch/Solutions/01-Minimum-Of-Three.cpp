/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-Minumum-Of-Three.cpp
 * @brief Solution for Problem 1 from Practice 3
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Изведете най-малкото от 3 числа
 */

#include <iostream>

using namespace std;

int main()
{
    // Четем числата от конзолата
    int num1, num2, num3, min;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Запазваме си по-малкото от num1 и num2
    if (num1 <= num2) {
        min = num1;
    } else {
        min = num2;
    }

    // Запазваме по-малкото от min и num3
    if (min > num3) {
        min = num3;
    }

    // Извеждаме на конзолата
    cout << "Smallest of the three numbers is: " << min;

    return 0;
}
