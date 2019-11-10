/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 11-Print-Right-Angle-Triangle-Numbers.cpp
 * @brief Solution for Problem 11 from Practice 5
 * @author Alexander Dimitrov
 * @author Ignat Ivanov
 *
 * Problem:
 * Read a whole number N and print
 * a right angle triangle with a side N
 * and increasing numbers as side elements.
 */

#include <iostream>

int main() {

    int side;
    do {
        std::cout << "Enter a positive side length: ";
        std::cin >> side;
    } while (side <= 0);

    int counter = 1;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j <= i; j++)
            std::cout << counter++ << '\t';
        std::cout << std::endl;
    }

    return 0;
}
