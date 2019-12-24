 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 02-Allocate-Array.cpp
 * @brief Solution for Problem 02 from Practice-10
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that allocates memory for
 *  a given amount of integers and returns
 *  a pointer to the allocated memory.
 */
#include <iostream>

int* allocateArray(int size)
{
    return new (std::nothrow) int[size];
}



int main()
{
    int numOfElements;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> numOfElements;

    int* pArr = allocateArray(numOfElements);

    if (!pArr) { // !pArr is equal to checking pArr == nullptr
        std::cout << "Not enough memory!" << std::endl;
        return 1;
    }

    // Testing by entering the elements of the array through the console
    std::cout << "Enter " << numOfElements << " numbers:" << std::endl;
    for (int i = 0; i < numOfElements; i++)
        std::cin >> pArr[i];

    // And printing them on the console
    for (int i = 0; i < numOfElements; i++)
        std::cout << pArr[i] << ' ';

    // DO NOT FORGET TO DELETE YOUR MEMORY!
    delete[] pArr;

    return 0;
}
