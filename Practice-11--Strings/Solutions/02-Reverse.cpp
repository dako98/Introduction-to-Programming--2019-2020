 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Reverse.cpp
 * @brief Solution for Problem 02 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that accepts
 *  a string and reverses it.
 */
#include <iostream>
#include "basicFuncs.hpp"

void reverse(char* str)
{
    unsigned len = strLen(str);
    for (unsigned i = 0; i < len / 2; i++)
        std::swap(str[i], str[(len - 1) - i]);
}

int main()
{
    const int MAX = 128;
    char buffer[MAX];

    std::cin.getline(buffer, MAX);
    reverse(buffer);
    std::cout << buffer;

    return 0;
}
