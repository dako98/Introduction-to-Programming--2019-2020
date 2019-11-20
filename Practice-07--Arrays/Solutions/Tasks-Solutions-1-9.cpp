/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Dako and Alexander.
 * @file Tasks-Solutions-1-9.cpp
 * @author Dako Dimov
 * @brief Solutions to problems 1-9 from Practice 7.
 * 
 */

#include <iostream>

const int MAX_ARRAY_SIZE = 128;

void FillArray(int arr[], int size);
void PrintArray(const int arr[], int size);
int FindMaxInArray(const int arr[], int size);
int FindSecondMax(const int arr[], int size);
float FindEvenAverage(const int arr[], int size);
long int ProductOfSums(const int arr[], int size);
void EvensAndOdds(const int arr[], int size);
void Duplcates(const int arr[], int size);
void Uniques(const int arr[], int size);
void Sum42(const int arr[], int size);

int main()
{
    int elementsCount = 0;
    int arr[MAX_ARRAY_SIZE];

    // Task 1
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    PrintArray(arr, elementsCount);
/*
    // Task 2
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    std::cout << FindMaxInArray(arr, elementsCount);

    // Task 3
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    std::cout << FindSecondMax(arr, elementsCount);

    // Task 4
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    std::cout << FindEvenAverage(arr, elementsCount);

    // Task 5
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    std::cout << ProductOfSums(arr, elementsCount);

    // Task 6
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    EvensAndOdds(arr, elementsCount);

    // Task 7
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    Duplcates(arr, elementsCount);

    // Task 8
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    Uniques(arr, elementsCount);

    // Task 9
    std::cin >> elementsCount;
    FillArray(arr, elementsCount);
    Sum42(arr, elementsCount);
*/
    return 0;
}

void FillArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];
}

void PrintArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
}

int FindMaxInArray(const int arr[], int size)
{
    if (size > 0)
    {
        int max = arr[0];

        for (int i = 1; i < size; i++)
            max = max < arr[i] ? arr[i] : max;

        return max;
    }
    return 0;
}

int FindSecondMax(const int arr[], int size)
{
    if (size > 0)
    {
        int max = arr[0];
        int secondMax = arr[0];

        for (int i = 1; i < size; i++)
        {
            if (arr[i] > secondMax)
            {
                if (arr[i] > max)
                {
                    secondMax = max;
                    max = arr[i];
                    continue;
                }

                secondMax = arr[i];
            }
        }
        return secondMax;
    }
    return 0;
}

float FindEvenAverage(const int arr[], int size)
{
    if (size > 0)
    {
        float sum = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
                sum += arr[i];
        }
        return sum / ((size / 2) + size % 2);
    }
    return 0;
}

long int ProductOfSums(const int arr[], int size)
{
    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }
    return oddSum * evenSum;
}

void EvensAndOdds(const int arr[], int size)
{
    int oddSum = 0, evenDiff = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            evenDiff -= arr[i];
        else
            oddSum += arr[i];
    }
    std::cout << "Odd sum: " << oddSum << "Even difference: " << evenDiff;
}

void Duplcates(const int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int j = 0;
        int occurances = 1;
        while (j < i)
        {
            if (arr[i] == arr[j])
                occurances++;
            ++j;
        }
        if (occurances == 2)
            std::cout << arr[i] << " ";
    }
}

void Uniques(const int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int j = 0;
        while (j < i)
        {
            if (arr[i] == arr[j])
                break;
            ++j;
        }
        if (i == j)
            std::cout << arr[i] << " ";
    }
}

void Sum42(const int arr[], int size)
{
    for (int first = 0; first < size - 1; first++)
    {
        for (int second = first + 1; second < size; second++)
        {
            if (arr[first] + arr[second] == 42)
            {
                std::cout << '(' << arr[first] << ", " << arr[second] << ") ";
            }
        }
    }
}
