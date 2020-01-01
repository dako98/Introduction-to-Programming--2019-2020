 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-To-Upper.cpp
 * @brief Solution for Problem 01 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that accepts a string and
 *  changes all small letters to capital letters.
 */
#include <iostream>

void toUpper(char* str)
{
    // Since in the ASCII table the capital leters
    // are first, we can subtract the difference
    // between 'a' and 'A' to get a capital letter
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 'a' - 'A';
        }
        str++;
    }
}

int main()
{
    const int MAX = 128;
    char buffer[MAX];

    // Read a whole line (until enter is pressed)
    std::cin.getline(buffer, MAX);
    toUpper(buffer);
    std::cout << buffer;

    return 0;
}
