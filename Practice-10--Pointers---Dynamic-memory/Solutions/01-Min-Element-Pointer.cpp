 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-Min-Element-Pointer.cpp
 * @brief Solution for Problem 01 from Practice-10
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that returns a pointer
 *  to the lowest element in a given array.
 */
#include <iostream>

const int* minElem(const int* arr, int size)
{
    const int* pResult = arr;
    for (int i = 1; i < size; i++)
        if (arr[i] < *pResult)
            pResult = &arr[i];
    return pResult;
}



int main()
{
    const int MAX_SIZE = 128;

    int arrOfNums[MAX_SIZE];
    int numOfElements;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> numOfElements;

    std::cout << "Enter " << numOfElements << " numbers:" << std::endl;
    for (int i = 0; i < numOfElements; i++)
        std::cin >> arrOfNums[i];

    const int* pMinElem = minElem(arrOfNums, numOfElements);
    std::cout << "Lowest element in the array is " << *pMinElem << std::endl;

    return 0;
}
