/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-03.cpp
 * @brief Solution for Problem 3 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * По въведени три числа a, b и c да се изчисли
 * дължината на тримерния вектор v(a, b, c).
 */

#include <iostream>
#include <math.h>   // Библиотека за математически функции

using namespace std;

int main()
{
    double a, b, c, length;

    cin >> a >> b >> c;

    length = sqrt(a * a + b * b + c * c);

    cout << "Length = " << length;

    return 0;
}
