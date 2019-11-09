/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Odd-Even.cpp
 * @brief Solution for Problem 2 from Practice 3
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Изведете дали въведеното число е четно или нечетно
 */

#include <iostream>

using namespace std;

int main()
{

    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Тестваме чрез тернарен оператор
    cout << (num % 2 ? "It's odd" : "It's even");

    return 0;
}
