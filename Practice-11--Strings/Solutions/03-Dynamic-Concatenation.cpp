 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Dynamic-Concatenation.cpp
 * @brief Solution for Problem 03 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that accepts two strings
 *  and returns a pointer to a dynamically allocated
 *  memory containing the concatenation of the two strings.
 */
#include <iostream>
#include "basicFuncs.hpp"

char* dynamicConcat(const char* str1, const char* str2)
{
    unsigned len1 = strLen(str1);
    unsigned len2 = strLen(str2);

    // Making a new string with space for both the other strings and the '\0'
    char* result = new (std::nothrow) char[len1 + len2 + 1];

    // Checking if we've received memory
    if (result) {
        strCpy(result, str1);
        strCat(result, str2);
    }

    return result;
}

int main()
{
    const int MAX = 128;
    char buffer1[MAX], buffer2[MAX];

    // Reading two lines of text
    std::cin.getline(buffer1, MAX);
    std::cin.getline(buffer2, MAX);

    // Concatenating them
    char* concat = dynamicConcat(buffer1, buffer2);
    std::cout << concat;

    // Don't forget to delete your memory
    delete[] concat;

    return 0;
}
