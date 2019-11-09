/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-04.cpp
 * @brief Solution for Problem 4 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * По въведени две цели числа изведете в конзолата
 * цялата част и остатъка на частното получено
 * при деление на двете числа.
 */

#include <iostream>

using namespace std;

int main()
{
    int integer, divisor;

    cin >> integer >> divisor;

    cout << "Whole division: " << integer / divisor << endl;
    cout << "Remainder: " << integer % divisor << endl;

    return 0;
}
