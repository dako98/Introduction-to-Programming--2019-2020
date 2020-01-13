/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Max-In-Array.cpp
 * @brief Solution for Problem 03 from Practice-12
 * @author Alexander Dimitrov (Method 1)
 * @author Dako Dimov (Method 2)
 *
 * Problem:
 *  Write a recursive function that 
 *  returns the largest number in an array.
 */

#include <iostream>


inline int maxOfTwo(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}


// Method 1.
int arrMax1(const int* arr, int size)
{
    if (size == 1)
        return *arr;

    int nextMax = arrMax1(arr + 1, size - 1);
    return maxOfTwo(*arr, nextMax);
}


// Declaring the recursive function, so we can use it in the wrapper
void arrMax2Rec(const int* arr, int size, int& currMax);


// Wrapper for the recursive arrMax2Rec
int arrMax2(const int* arr, int size)
{
    int max = *arr;
    arrMax2Rec(arr + 1, size - 1, max);
    return max;
}


// Method 2: Similar to the iterative method, keeping the current max number
void arrMax2Rec(const int* arr, int size, int& currMax)
{
    if (size <= 0)
        return;

    currMax = maxOfTwo(*arr, currMax);
    arrMax2Rec(arr + 1, size - 1, currMax);
}


int main()
{
    const int SIZE = 7;
    int arr[SIZE] = {5, 1, -2, 3, 7, 9, 2};

    // Method 1
    std::cout << arrMax1(arr, SIZE) << std::endl;

    // Method 2
    std::cout << arrMax2(arr, SIZE);

    return 0;
}
