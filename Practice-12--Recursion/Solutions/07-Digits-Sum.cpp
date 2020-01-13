/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 07-Digits-Sum.cpp
 * @brief Solution for Problem 07 from Practice-12
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a recursive function that returns
 *  the sum of the digits of a given number.
 */

#include <iostream>


int digitsSum(int num)
{
    if (num == 0)
        return 0;

    return num % 10 + digitsSum(num / 10);
}


int main()
{
    std::cout << digitsSum(1234) << std::endl << digitsSum(-1234);

    return 0;
}
