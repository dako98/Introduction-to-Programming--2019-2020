 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-Lines-Intersection-Point.cpp
 * @brief Solution for Sample Problem 01
 * @author Alexander Dimitrov
 *
 * Problem:
 * Write a program that reads 6 floating point numbers
 * A1, B1, C1, A2, B2, C2 that are the coefficients of
 * these line equations: A1*x + B1*y + C1 = 0 and
 * A2*x + B2*x + C2 = 0.
 * If these lines are parallel print "Parallel".
 * If the lines aren't parallel - print the coordinates
 * of the intersection point.
 */

#include <iostream>

double mAbs(double num)
{
    return num < 0 ? -num : num;
}


int main()
{

    const double EPS = 0.0001;
    double a1, b1, c1, a2, b2, c2;
    std::cout << "Enter the six coefficient A1, B1, C1, A2, B2, C2 of the line equations:";
    std::cout << "A1*x + B1*y + C1 = 0 and A2*x + B2*x + C2 = 0:" << std::endl;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    // To get the intersection point we must solve the system
    // | A1*x + B1*y + C1 = 0
    // | A2*x + B2*x + C2 = 0
    // To solve it we can use Cramer's rule:
    double determinant = a1 * b2 - b1 * a2;
    double intersectionX = ((c1*b2) - (c2*b1)) / determinant;
    double intersectionY = ((a1*c2) - (c1*a2)) / determinant;

    if (mAbs(determinant) < EPS)
        std::cout << "Parallel" << std::endl;
    else
        std::cout << "The lines intersect at (" << intersectionX << ", " << intersectionY << ")" << std::endl;

    return 0;
}

// Example input: 1 2 3 4 5 6
// output: The lines intersect at (-1, 2)
// https://www.desmos.com/calculator/zqvqbfcp7z
