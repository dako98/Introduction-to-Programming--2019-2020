/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Print-1-to-N.cpp
 * @brief Solution for Problem 02 from Practice-12
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a recursive function that 
 *  prints the numbers from 1 to N.
 */

#include <iostream>


void print1toN(int num)
{
    if (num <= 0)
        return;

    print1toN(num - 1);
    std::cout << num << ' ';
}


int main()
{
    int numbers;
    std::cout << "Enter N: ";
    std::cin >> numbers;

    print1toN(numbers);

    return 0;
}
