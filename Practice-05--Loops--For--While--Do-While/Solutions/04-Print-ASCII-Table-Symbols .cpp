/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Print-ASCII-Table-Symbols.cpp
 * @brief Solution for Problem 4 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Print the ASCII table symbols (0-127).
 */

#include <iostream>

int main() {

    const unsigned char LAST_CHAR = 127;

    // Използваме unsigned char защото char ще препълним
    // типа (overflow) и ще получим безкраен цикъл
    for (unsigned char ch = 0; ch <= LAST_CHAR; ch++)
        std::cout << ch << ' ';

    return 0;
}
