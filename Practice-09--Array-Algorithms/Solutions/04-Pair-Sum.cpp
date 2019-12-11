/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 04-Pair-Sum.cpp
 * @brief Solution for Problem 04 from Practice-09
 * @author Dako Dimov
 *
 * Problem:
 *  Write a program that searches an array for a pair of
 *  numbers whose sum is equal to a specific number.
 */

#include <iostream>

void selectionSort(int arr[], int n);
bool sumExists(const int arr[], int size, int sum);

const int MAX_SIZE = 1024;

int main()
{
    int arr[MAX_SIZE];
    int count, sum;
    std::cout << "Enter the searched sum: ";
    std::cin >> sum;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> count;

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < count; i++)
        std::cin >> arr[i];

    selectionSort(arr, count);
    std::cout << (sumExists(arr, count, sum) ? "Yes" : "No");

    return 0;
}




void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int currMinIndex = i;

        for (int j = i + 1; j < size; j++)
            if (arr[j] < arr[currMinIndex])
                currMinIndex = j;

        if (i != currMinIndex)
            std::swap(arr[i], arr[currMinIndex]);
    }
}


bool sumExists(const int arr[], int size, int sum)
{
    int lIndex = 0;
    int rIndex = size - 1;

    while (arr[lIndex] + arr[rIndex] != sum && lIndex != rIndex)
    {
        if (arr[lIndex] + arr[rIndex] < sum)
            lIndex++;
        else
            rIndex--;
    }
    return arr[lIndex] + arr[rIndex] == sum;
}
