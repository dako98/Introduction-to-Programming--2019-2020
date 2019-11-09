/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-02.cpp
 * @brief Solution for Problem 2 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Прочетете три числа и изведете средно аритметичното им.
 */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    cout << (num1 + num2 + num3) / 3.0;

    return 0;
}
