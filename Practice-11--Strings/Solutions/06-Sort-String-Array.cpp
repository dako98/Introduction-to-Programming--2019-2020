 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Sort-String-Array.cpp
 * @brief Solution for Problem 06 from Practice-11
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that sorts and array of strings.
 */
#include <iostream>
#include "basicFuncs.hpp"

void sortWordArray(char** arr, int size)
{
    // A simple insertion sort
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < size; j++)
            if (strCmp(arr[j], arr[minIndex]) < 0)
                minIndex = j;

        if (i != minIndex)
            std::swap(arr[i], arr[minIndex]);
    }
}

void clearWordArray(char** arr, int i)
{
    while (i > 0) {
        --i;
        delete[] arr[i];
    }
    delete[] arr;
}

int main()
{
    const int MAX = 128;
    int numOfWords;

    std::cout << "How many words shall we enter: ";
    std::cin >> numOfWords;

    // Create an array of char*
    char** wordArray = new (std::nothrow) char*[numOfWords];
    if (!wordArray) {
        std::cout << "Not enough memory!" << std::endl;
        return 1;
    }

    // Since we'll be using getline after a cin
    // there's a '\n' at the end of the line that
    // we need to get rid of for example with cin.ignore
    std::cin.ignore(MAX, '\n');

    char buffer[MAX];

    // Read numOfWords lines of text
    for (int i = 0; i < numOfWords; i++)
    {
        std::cin.getline(buffer, MAX);
        wordArray[i] = new (std::nothrow) char[strLen(buffer) + 1];

        if (!wordArray[i]) {
            clearWordArray(wordArray, i);
            std::cout << "Not enough memory!" << std::endl;
            return 1;
        }

        strCpy(wordArray[i], buffer);
    }

    // Sorting
    sortWordArray(wordArray, numOfWords);

    std::cout << std::endl << "Sorted array:" << std::endl;

    // Print each word on a new line
    for (int i = 0; i < numOfWords; i++)
        std::cout << wordArray[i] << std::endl;

    // Don't forget to delete your memory
    clearWordArray(wordArray, numOfWords);

    return 0;
}
