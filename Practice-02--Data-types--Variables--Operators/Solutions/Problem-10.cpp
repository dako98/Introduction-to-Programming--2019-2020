/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-10.cpp
 * @brief Solution for Problem 10 from Practice 2
 * @author Alexander Dimitrov
 *
 * Задача:
 * Прочетете три цели числа от конзолата a, b и c:
 * коефициенти на квадратното уравнение ax^2 + bx + c = 0.
 * Пресметнете и изведете на конзолата корените му.
 *
 * Забележка: Ще считаме че въведените стойности за a, b и c
 * са винаги такива, че уравнението има два реални корена.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    double D, x1, x2;

    cout << "ax^2 + bx + c = 0\nEnter a, b and c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;
    x1 = (-b - sqrt(D)) / (2 * a);
    x2 = c / (a * x1);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
