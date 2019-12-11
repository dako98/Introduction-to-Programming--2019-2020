
/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-Last-Occurrence.cpp
 * @brief Solution for Problem 01 from Practice-09
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a program that finds the index
 *  of the last occurrence of an element.
 */

#include <iostream>

int main()
{

    // Example array
    int size = 11;
    int arr[] = { 5, 2, 5, 7, 1, 0, -2, -3, -1, 5, 7 };

    // Finding the last occurrence of the number 5 in the array
    int toFind = 5;
    int index = -1;
    for (int i = 0; i < size; i++)
        if (arr[i] == toFind)
            index = i;

    // Output
    if (index == -1)
        std::cout << toFind << " is not in the array." << std::endl;
    else
        std::cout << "Last occurrence of " << toFind << " is on index " << index << std::endl;

    return 0;
}
