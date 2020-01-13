/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 08-Recursive-Selection-Sort.cpp
 * @brief Solution for Problem 08 from Practice-12
 * @author Alexander Dimitrov
 * @author Todor Todorov
 *
 * Problem:
 *  Write a recursive selection sort function.
 */

#include <iostream>

int arrMinIndex(const int* arr, int size)
{
    if (size == 1)
        return 0;

    int nextMinIndex = arrMinIndex(arr, --size);
    return (arr[size] < arr[nextMinIndex]) ? size : nextMinIndex;
}

void selectionSort(int* arr, int size)
{
    if (size <= 1)
        return;

    int minIndex = arrMinIndex(arr, size);
    if (minIndex != 0)
        std::swap(*arr, arr[minIndex]);
    selectionSort(arr + 1, size - 1);
}

int main()
{
    const int SIZE = 9;
    int arr[SIZE] = { 1002, 32, 8, 6, 4, 16, 24, 48, 256 };

    selectionSort(arr, SIZE);

    for (int i = 0; i < SIZE; i++)
        std::cout << arr[i] << ' ';

    return 0;
}
