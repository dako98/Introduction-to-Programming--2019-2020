/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-01.cpp
 * @brief Solution for Problem 1 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Прочетете две цели числа от стандартния вход
 * и изведете разликата им на стандартния изход.
 */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << num1 - num2 << endl;

    return 0;
}
