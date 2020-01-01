 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Palindrome-Check.cpp
 * @brief Solution for Problem 04 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that checks wheter
 *  a given string is a palindrome.
 */
#include <iostream>
#include "basicFuncs.hpp"

bool isPalindrome(const char* str)
{
    unsigned len = strLen(str);

    for (unsigned i = 0; i < len / 2; i++)
        if (str[i] != str[(len - 1) - i])
            return false;

    return true;
}

int main()
{
    const int MAX = 128;
    char buffer[MAX];

    std::cin.getline(buffer, MAX);

    std::cout << buffer << " is " << (isPalindrome(buffer) ? "" : "not " ) << "a Palindrome." << std::endl;

    return 0;
}
