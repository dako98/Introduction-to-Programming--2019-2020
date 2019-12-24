 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 05-Binary-Search-With-Pointers.cpp
 * @brief Solution for Problem 05 from Practice-10
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that accepts an array and a number
 *  and returns a pointer to the given number in the
 *  array using binary search, or nullptr if the
 *  number doesn't exist in the array.
 */
#include <iostream>

// Finds and returns a pointer to a given element in a SORTED array
const int* find(const int* arr, int size, int searchFor)
{
    const int* pFirst = arr;
    const int* pLast = &arr[size - 1];

    const int* pMiddle;
    while (pFirst <= pLast) {

        pMiddle = pFirst + (pLast - pFirst) / 2;

        if (*pMiddle == searchFor)
            return pMiddle;

        if (*pMiddle < searchFor)
            pFirst = pMiddle + 1;
        else
            pLast = pMiddle - 1;

    }

    return nullptr;
}



int main()
{
    int numOfElements;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> numOfElements;

    int* pArr = new (std::nothrow) int[numOfElements];

    if (!pArr) { // !pArr is equal to checking pArr == nullptr
        std::cout << "Not enough memory!" << std::endl;
        return 1;
    }

    // Testing by entering the elements of the array through the console
    std::cout << "Enter " << numOfElements << " SORTED numbers:" << std::endl;
    for (int i = 0; i < numOfElements; i++)
        std::cin >> pArr[i];

    int elem;
    std::cout << "Enter a number to search in the SORTED array: ";
    std::cin >> elem;

    // Using the function and capturing the result in pResult
    const int* pResult = find(pArr, numOfElements, elem);
    if (pResult) {
        std::cout << *pResult << " has been found in the array." << std::endl;
        std::cout << "It's at index " << pResult - pArr << std::endl;
    } else {
        std::cout << elem << " was not found in the array." << std::endl;
    }

    // DO NOT FORGET TO DELETE YOUR MEMORY!
    delete[] pArr;

    return 0;
}
