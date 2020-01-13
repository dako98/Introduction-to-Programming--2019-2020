/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 05-Recursive-strlen.cpp
 * @brief Solution for Problem 05 from Practice-12
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a recursive strlen function.
 */

#include <iostream>


int strLenRec(const char* str)
{
    if (*str == '\0')
        return 0;

    return 1 + strLenRec(str + 1);
}


int main()
{
    std::cout << strLenRec("Test");

    return 0;
}
