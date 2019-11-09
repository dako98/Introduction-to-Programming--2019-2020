/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-05.cpp
 * @brief Solution for Problem 5 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * По въведени две числа a и b, разменете
 * стойностите им и ги изведете на екрана.
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // Чрез допълнителна променлива
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
