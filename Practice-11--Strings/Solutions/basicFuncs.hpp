 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file basicFuncs.hpp
 * @brief Basic string functions
 * @author Alexander Dimitrov
 */


// Returns the length of the string
unsigned strLen(const char* str)
{
    unsigned result = 0;
    while (*str) {
        ++str;
        ++result;
    }
    return result;
}


// This is just a different way of writing the function strLen
unsigned strLenWithSubtr(const char* str)
{
    const char* ptr = str;
    while (*ptr++)
        ;
    return ptr - str - 1;
}


// Copies the characters from src to dest
void strCpy(char* dest, const char* src)
{
    while (*src) {
        *dest = *src;
        ++src;
        ++dest;
    }
    // Don't forget to null-terminate the string
    *dest = '\0';
}


// Concatenates (Adds the chars from) src to dest
void strCat(char* dest, const char* src)
{
    // Move the dest pointer to the end of the string
    while (*dest)
        ++dest;

    // And copy the src there
    strCpy(dest, src);
}


// Returns a negative number if str1 is alphabetically
// before str2, a positive number if str2 is before str1.
// Returns 0 if the strings are equal.
int strCmp(const char* str1, const char* str2)
{
    while (*str1 && *str1 == *str2)
    {
        ++str1;
        ++str2;
    }
    return *str1 - *str2;
}
