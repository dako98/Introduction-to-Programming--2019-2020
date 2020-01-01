 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 05-String-To-Number.cpp
 * @brief Solution for Problem 05 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that returns a number
 *  interpreted from a string (atoi) for
 *  whole non-negative numbers.
 */
#include <iostream>

unsigned strToNum(const char* str)
{
    unsigned result = 0;

    while (*str >= '0' && *str <= '9') {
        result *= 10;
        result += *str - '0';
        ++str;
    }

    return result;
}

int main()
{
    const int MAX = 128;
    char buffer1[MAX];
    char buffer2[MAX];

    // Read two lines of text (numbers)
    std::cin.getline(buffer1, MAX);
    std::cin.getline(buffer2, MAX);

    // Convert both to numbers
    unsigned num1 = strToNum(buffer1);
    unsigned num2 = strToNum(buffer2);

    // Add them together and print the result
    unsigned result = num1 + num2;
    std::cout << result;

    return 0;
}
