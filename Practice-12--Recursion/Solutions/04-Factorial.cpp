 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Factorial.cpp
 * @brief Solution for Problem 04 from Practice-12
 * @author Dako Dimov
 *
 * Problem:
 *  Write a recursive function that
 *  returns the factorial of a given number.
 */

#include <iostream>


unsigned long long fact(unsigned int x)
{
    if (x <= 1)
        return 1;

    return x * fact(x - 1);
}


int main()
{
    std::cout << fact(5);

    return 0;
}
