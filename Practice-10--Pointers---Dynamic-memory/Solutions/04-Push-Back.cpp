 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Push-Back.cpp
 * @brief Solution for Problem 04 from Practice-10
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that adds an element at the end
 *  of a dynamically allocated array of integers.
 */
#include <iostream>

// arr, size and capacity are passed to the
// function with & so that we can change them.
bool pushBack(int*& arr, int& size, int& capacity, int elem)
{
    // Check if there isn't enough space for a new element
    if (size + 1 > capacity) {

        // Create a new array with double the capacity
        int* newArr = new (std::nothrow) int[capacity * 2];
        // If there isn't enough memory for a new array
        // stop the function with result false
        if (!newArr)
            return false;

        // Increase the capacity
        capacity *= 2;

        // Copy the old elements to the new array
        for (int i = 0; i < size; i++)
            newArr[i] = arr[i];

        // Add the new element
        newArr[size] = elem;

        // Increase the size
        size++;

        // Delete the old array
        delete[] arr;

        // Finally save the new array in the old pointer
        arr = newArr;

    } else {
        // If there is enough space in the array
        // we can just add the new element and
        // adjust the size by adding 1.
        arr[size++] = elem;
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
    std::cout << "Enter a number to add to the back of the array: ";
    std::cin >> elem;

    // Adding an element to the array
    if (pushBack(pArr, numOfElements, capacityOfTheArray, elem))
        std::cout << "The element was added." << std::endl;
    else
        std::cout << "The element could not be added! Not enough memory?" << std::endl;

    // And printing it on the console
    for (int i = 0; i < numOfElements; i++)
        std::cout << pArr[i] << ' ';

    // DO NOT FORGET TO DELETE YOUR MEMORY!
    delete[] pArr;

    return 0;
}
