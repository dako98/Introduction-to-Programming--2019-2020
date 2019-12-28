 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Insert-At.cpp
 * @brief Solution for Problem 06 from Practice-10
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that adds an element at a given position
 *  of a dynamically allocated array of integers.
 */
#include <iostream>

// arr and size are passed to the function
// with & so that we can change both of them.
bool insertAt(int*& arr, int& size, int& capacity, int elem, int pos)
{
    if (size + 1 > capacity) {

        // Create a new array with with double the capacity
        int* newArr = new (std::nothrow) int[capacity * 2];
        // If there isn't enough memory for a new array
        // stop the function with result false
        if (!newArr)
            return false;

        // Increase the capacity
        capacity *= 2;

        // Copy the old elements to the new array up to the
        // specificied position
        for (int i = 0; i < pos; i++)
            newArr[i] = arr[i];

        // Add the new element
        newArr[pos] = elem;

        // Increase the size
        size++;

        // Copy the rest of the elements of the old array
        for (int i = pos + 1; i < size; i++)
            newArr[i] = arr[i - 1];

        // Delete the old array
        delete[] arr;

        // Finally save the new array in the old pointer
        arr = newArr;

    } else {

        // If there is space to insert a new element
        // move all the elements after the specified position to the right
        for (int i = size; i > pos; i--)
            arr[i] = arr[i - 1];

        // Place the specified element in the specified position
        arr[pos] = elem;

        // Increase the size
        size++;

    }

    return true;
}



int main()
{
    // We'll have an array that has a certain capacity
    // And we'll also keep track of the number of elements in that array.
    int numOfElements, capacityOfTheArray;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> numOfElements;

    capacityOfTheArray = numOfElements;

    int* pArr = new (std::nothrow) int[capacityOfTheArray];

    if (!pArr) { // !pArr is equal to checking pArr == nullptr
        std::cout << "Not enough memory!" << std::endl;
        return 1;
    }

    // Testing by entering the elements of the array through the console
    std::cout << "Enter " << numOfElements << " numbers:" << std::endl;
    for (int i = 0; i < numOfElements; i++)
        std::cin >> pArr[i];

    int elem;
    std::cout << "Enter a number to insert in the array: ";
    std::cin >> elem;

    int pos;
    std::cout << "Enter a position to add the number to: ";
    std::cin >> pos;

    if (pos < 0 || pos > numOfElements) {
        std::cout << "Wrong positiong!" << std::endl;
        return 1;
    }

    // Insert an element to the array
    if (insertAt(pArr, numOfElements, capacityOfTheArray, elem, pos))
        std::cout << "The element was inserted." << std::endl;
    else
        std::cout << "The element could not be inserted! Not enough memory?" << std::endl;

    // And printing it on the console
    for (int i = 0; i < numOfElements; i++)
        std::cout << pArr[i] << ' ';

    // DO NOT FORGET TO DELETE YOUR MEMORY!
    delete[] pArr;

    return 0;
}
