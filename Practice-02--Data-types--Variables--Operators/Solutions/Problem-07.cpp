/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-07.cpp
 * @brief Solution for Problem 7 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Прочетете три числа (дължини на страни на триъгълник)
 * и изведете лицето му.
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, p, area;

    cin >> a >> b >> c;

    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Area of triangle is " << area << endl;

    return 0;
}
