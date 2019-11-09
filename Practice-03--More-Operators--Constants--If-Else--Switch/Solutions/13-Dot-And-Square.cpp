/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 13-Dot-And-Square.cpp
 * @brief Solution for Problem 13 from Practice 3
 * @author Dako Dimov
 *
 * Задача:
 * По подадена точка A и страна на квадрат центриран в
 * центъра на координатната система да се определи
 * взаимното им положение.
 */

#include<iostream>

using namespace std;

int main()
{
    const double EPS = 0.0001;  // Сравняваме с точност до четвъртия знак след десетичната запетая.

    double x, y;
    double squareSide;

    cin >> x >> y >> squareSide;

    bool onVerticalLine = abs( x - squareSide/2 ) < EPS || abs( x + squareSide/2 ) < EPS;       // Проверка дали лежи на някоя от вертикалните прави.
    bool onHorizontalLine = abs( y - squareSide/2 ) < EPS || abs( y + squareSide/2 ) < EPS;     // Проверка дали лежи на някоя от хоризонталните прави.

    bool insideVerticalSide = onVerticalLine && ( y < squareSide/2 || y > -squareSide/2 );      // Проверка дали лежи вътре в някоя от вертикалните страни.
    bool insideHorizontalSide = onHorizontalLine && ( x < squareSide/2 || x > -squareSide/2 );  // Проверка дали лежи вътре в някоя от хоризонталните страни.



    if (x < squareSide/2 && x > -squareSide/2
     && y < squareSide/2 && y > -squareSide/2)
    {
        cout<<"Inside.";
    }
    else if (onVerticalLine && onHorizontalLine         // Проверка дали лежи на ъгъл.
        || insideHorizontalSide || insideVerticalSide)  // Проверка дали лежи на страната.
    {
        cout<<"On square.";
    }
    else
        cout<<"Outside.";


    return 0;
}
