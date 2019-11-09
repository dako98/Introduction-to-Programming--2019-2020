/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 09-Dot-In-Quadrant.cpp
 * @brief Solution for Problem 9 from Practice 3
 * @author Dako Dimov
 *
 * Задача:
 * Проверете в кой квадрант е въведената
 * точка с координати цели числа.
 */

#include <iostream>

using namespace std;

int main()
{
    // Четем координатите на точката
    int x, y;
    cin >> x >> y;


    if (x > 0 && y > 0)
    {
        cout << "First quadrant.";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Second quadrant.";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Third quadrant.";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Fourth quadrant.";
    }
    else if (x == 0 && y > 0)
    {
        cout << "Above abscissa.";
    }
    else if (x == 0 && y < 0)
    {
        cout << "Below abscissa.";
    }
    else if (x > 0 && y == 0)
    {
        cout << "Right of ordinate.";
    }
    else if (x < 0 && y == 0)
    {
        cout << "Left of ordinate.";
    }
    else
    {
        cout << "In the center.";
    }

    cout << endl;

    return 0;
}
