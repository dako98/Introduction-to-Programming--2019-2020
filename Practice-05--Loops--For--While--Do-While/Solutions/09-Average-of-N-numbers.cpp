/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 09-Average-of-N-numbers.cpp
 * @brief Solution for Problem 9 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole positive integer N and then
 * N whole numbers and print their average.
 */

#include <iostream>

int main() {

    int numCount;
    int enteredValue;
    long long sum = 0;
    do {
        std::cout << "Please enter a positive N: ";
        std::cin >> numCount;
    } while(numCount <= 0);

    for (int i = 0; i < numCount; i++)
    {
        std::cin >> enteredValue;
        sum += enteredValue;
    }

    double average = sum / (double)numCount;
    std::cout << "The average is " << average << std::endl;

    return 0;
}
