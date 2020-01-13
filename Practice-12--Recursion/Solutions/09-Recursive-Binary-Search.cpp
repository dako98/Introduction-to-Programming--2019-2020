/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 09-Recursive-Binary-Search.cpp
 * @brief Solution for Problem 09 from Practice-12
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a recursive binary search function.
 */

#include <iostream>


const int* binarySearch(const int* arr, int size, int target)
{
    if (size == 0)
        return nullptr;


    const int* middle = arr + size / 2;

    if (*middle == target)
        return middle;

    if (*middle < target)
        return binarySearch(middle + 1, size / 2, target);

    return binarySearch(arr, size / 2, target);
}


int main()
{
    const int SIZE = 9;
    int arr[SIZE] = { 1, 4, 8, 16, 24, 32, 48, 256, 1002 };

    int target = 256;
    const int* result = binarySearch(arr, SIZE, target);

    if (result)
        std::cout << "Found " << *result << std::endl;
    else
        std::cout << target << " not found!" << std::endl;

    return 0;
}
