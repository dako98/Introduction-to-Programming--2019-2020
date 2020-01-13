/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-Print-N-to-1.cpp
 * @brief Solution for Problem 01 from Practice-12
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a recursive function that 
 *  prints the numbers from N to 1.
 */

#include <iostream>


void printNto1(int num)
{
    if (num <= 0)
        return;

    std::cout << num << ' ';
    printNto1(num - 1);
}


int main()
{
    int numbers;
    std::cout << "Enter N: ";
    std::cin >> numbers;

    printNto1(numbers);

    return 0;
}
