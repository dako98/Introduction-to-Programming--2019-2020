/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Dako and Alexander.
 * @file Tasks-Solutions-10-14.cpp
 * @author Dako Dimov
 * @brief Solutions to problems 10-14 from practice 7.
 * 
 */

#include <iostream>

const int MAX_ARRAY_SIZE = 128;

void FillArray(int arr[], int size);
void PrintArray(const long int arr[], int size);
void Find(const int arr[], int size, int target, int &first, int &last, int &count);
bool IsSaw(const int arr[], int size);
void LargestSubset(const int arr[], int size, int &begin, int &length);
void PolynomialProduct(long int result[], int &resultSize, const int pol1[], int size1, const int pol2[], int size2);
bool SumOfZero(const int arr[], int size);

int main()
{

    int elementsCount = 0;
    int arr[MAX_ARRAY_SIZE];
    long int resultArr[MAX_ARRAY_SIZE];
    int arr2[MAX_ARRAY_SIZE];
    int arr3[MAX_ARRAY_SIZE];

    // Task 10
    int target, count, first, last;
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    std::cin >> target;
    Find(arr, elementsCount, target, first, last, count);
    std::cout << "First: " << first << " last: " << last << " count: " << count << '\n';
/*
    // Task 11
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    std::cout << (IsSaw(arr, elementsCount) ? "Yes" : "No") << '\n';

    // Task 12
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    LargestSubset(arr, elementsCount, first, count);
    std::cout << "Beginning: " << first << " lenght: " << count << '\n';

    // Task 13
    int arr2Size, arr3Size;
    std::cin >> arr2Size;
    std::cout << "Enter coeficcients starting from x^0:\n";
    FillArray(arr2, arr2Size);
    std::cin >> arr3Size;
    FillArray(arr3, arr3Size);
    int resultArrSize;
    PolynomialProduct(resultArr, resultArrSize, arr2, arr2Size, arr3, arr3Size);
    std::cout << "Starting from x^" << resultArrSize - 1 << ": ";
    PrintArray(resultArr, resultArrSize);
    
    // Task 14
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    SumOfZero(arr, elementsCount);
*/
    return 0;
}

void FillArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

void PrintArray(const long int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
}

void Find(const int arr[], int size, int target, int &first, int &last, int &count)
{
    bool foundFirst = false;
    count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            last = i;
            count++;
            if (!foundFirst)
            {
                first = i;
                foundFirst = true;
            }
        }
    }
}

bool IsSaw(const int arr[], int size)
{
    if (size > 3)
    {

        for (int i = 0; i < size - 2; i++)
        {
            if ((arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]) ||
                (arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2]))
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return true;
    }
}

void LargestSubset(const int arr[], int size, int &begin, int &length)
{
    begin = -1;
    int currentLen = 0, longestLen = 0;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            currentLen++;
        }
        else
        {
            if (currentLen > longestLen)
            {
                begin = i - currentLen;
                longestLen = currentLen;
            }

            currentLen = 0;
        }
    }
    if (currentLen > longestLen)
    {
        longestLen = currentLen;
    }
    length = longestLen + 1;
}

void PolynomialProduct(long int result[], int &resultSize, const int pol1[], int size1, const int pol2[], int size2)
{
    resultSize = size1 + size2 - 1;
    for (int i = 0; i < resultSize; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            result[i + j] += pol1[i] * pol2[j];
        }
    }
}

bool SumOfZero(const int arr[], int size)
{
    for (int start = 0; start < size; start++)
    {
        int sum = 0;

        for (int i = start; i < size; i++)
        {
            sum += arr[i];

            if (sum == 0)
                return true;
        }
    }
    return false;
}
