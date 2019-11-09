/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-09.cpp
 * @brief Solution for Problem 9 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Изчислете и изведете разстоянието между две точки
 * с координати A(x1, y1) и B(x2, y2), като прочетете
 * координатите x1, y1, x2 и y2 от стандартния вход.
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2, distance;

    cout << "Point A(x1, y1) - Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Point B(x2, y2) - Enter x2 and y2: ";
    cin >> x2 >> y2;

    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    cout << "The distance between Point A and Point B is " << distance << endl;

    return 0;
}
