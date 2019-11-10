/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 08-Max-of-N-numbers.cpp
 * @brief Solution for Problem 8 from Practice 5
 * @author Alexander Dimitrov
 * @author Ignat Ivanov
 *
 * Problem:
 * Read a whole positive integer N and then
 * N whole numbers and print the highest of them.
 */

#include <iostream>

int main() {

    int numCount;
    int maxValue;
    int enteredValue;
    do {
        std::cout << "Please enter a positive N: ";
        std::cin >> numCount;
    } while(numCount <= 0);

    for (int i = 0; i < numCount; i++)
    {
        std::cin >> enteredValue;
        if (i == 0 || enteredValue > maxValue)
            maxValue = enteredValue;
    }

    std::cout << "The highest is " << maxValue << std::endl;

    return 0;
}
