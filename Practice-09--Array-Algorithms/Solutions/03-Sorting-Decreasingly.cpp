 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Sorting-Decreasingly.cpp
 * @brief Solution for Problem 03 from Practice-09
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a program that sorts a given array in decreasing order
 */

#include <iostream>

// Inserts an element at a position keeping the order of the array
bool insertAt(int arr[], int& size, int element, int position);
// Selection sort
void selectionSort(int arr[], int size);
// Reads the given array from the console
void readArray(int arr[], int size);
// Prints the given array
void printArray(const int arr[], int size);

const int MAX_SIZE = 1024;

int main()
{
    int size;
    int arr[MAX_SIZE];

    std::cout << "Enter array size: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array: ";
    readArray(arr, size);

    selectionSort(arr, size);

    printArray(arr, size);

    return 0;
}




bool insertAt(int arr[], int& size, int element, int position)
{
    if (position > size || position < 0 || size + 1 > MAX_SIZE)
        return false;

    for (int i = size; i > position; --i)
        arr[i] = arr[i - 1];

    arr[position] = element;
    ++size;

    return true;
}


void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}


void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ';
}


void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        int currMaxIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[j] > arr[currMaxIndex])
                currMaxIndex = j;
        if (i != currMaxIndex)
            std::swap(arr[i], arr[currMaxIndex]);
    }
}
