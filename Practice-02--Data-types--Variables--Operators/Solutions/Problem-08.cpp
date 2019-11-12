/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-08.cpp
 * @brief Solution for Problem 8 from Practice 2
 * @author Alexander Dimitrov
 *
 * Задача:
 * Изчислете лицето на триъгълник по дадени две страни и ъгъл
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    double a, b, angle, area;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Angle = ";
    cin >> angle;

    angle /= 180;
    angle *= PI;

    area = 0.5 * a * b * sin(angle);

    cout << "Area of triangle is " << area << endl;

    return 0;
}
