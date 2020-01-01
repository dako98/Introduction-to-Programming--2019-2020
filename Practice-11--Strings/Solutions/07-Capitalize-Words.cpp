 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 07-Capitalize-Words.cpp
 * @brief Solution for Problem 07 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that capitalizes
 *  each word in a given string.
 */
#include <iostream>

void capitalizeWords(char* str)
{
    bool nextIsWord = true;
    while (*str)
    {
        if (nextIsWord && *str >= 'a' && *str <= 'z')
            *str -= 'a' - 'A';

        if (*str == ' ')
            nextIsWord = true;
        else
            nextIsWord = false;

        ++str;
    }
}

int main()
{
    const int MAX = 128;
    char buffer[MAX];
    std::cin.getline(buffer, MAX);

    capitalizeWords(buffer);

    std::cout << buffer;

    return 0;
}
