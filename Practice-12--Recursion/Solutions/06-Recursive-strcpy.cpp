 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Recursive-strcpy.cpp
 * @brief Solution for Problem 06 from Practice-12
 * @author Dako Dimov
 *
 * Problem:
 *  Write a recursive strcpy function.
 */

#include <iostream>


void strCpyRec(char *dst, const char *src)
{
    if (*src == '\0')
    {
        *dst = *src;
        return;
    }
    *dst = *src;
    strCpyRec(dst + 1, src + 1);
}


int main()
{
    const int MAX_SIZE = 128;

    char *string = new (std::nothrow) char[MAX_SIZE];
    if (!string)
        return 1;

    strCpyRec(string, "This is a sample text.");
    std::cout << string;

    delete[] string;

    return 0;
}
