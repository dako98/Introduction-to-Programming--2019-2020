/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Replace-Repeating-Aditional-Memory.cpp
 * @brief Solution for Sample Problem 03 using aditional memory
 * @author Alexander Dimitrov
 *
 * Problem:
 * Write a program that reads a positive whole number N
 * and then reads a sequence of N numbers, replaces any
 * sequence of repeating one after another equal numbers
 * (with precision of 4 digits after the decimal point) with
 * the average of the whole sequence. Print the sequence.
 *     Input: 10
 *            1 2 2 2 2 3 4 4 4 5
 *
 *     // The average of the sequence is 2.9
 *     Output: 1 2.9 3 2.9 5
 */

#include <iostream>

float mAbs(float num) {
    return num < 0 ? -num : num;
}

int main() {

    const unsigned MAX = 5000;
    const float EPS = 0.0001;
    unsigned n;
    float arr[MAX];
    float average = 0;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    // Reading and calculating average of the sequence
    std::cout << "Enter the elements: ";
    for (unsigned i = 0; i < n; ++i) {
        std::cin >> arr[i];
        average += arr[i];
    }
    average /= n;

    // Creating a new array to store the result
    float arrResult[MAX];

    // Flag indicating whether the current element
    // of the original array is in a repeating sequence
    bool inSequence = false;

    // Size variable for the resultng array
    unsigned resultSize = 0;

    // Iterating through the original array until n-2
    // because we are accessing the i-th and the i+1 index
    for (unsigned i = 0; i < n - 1; ++i) {

        // If the we are not in a sequence
        if (!inSequence) {

            // And the next element is the same as the current
            if (mAbs(arr[i] - arr[i + 1]) < EPS) {
                // We indicate that we are now in a sequence
                inSequence = true;
                // And we add the average to the resulting array
                arrResult[resultSize++] = average;
            } else {
                // If we are not in a sequence and the current
                // element is different we can add the current
                // element to the array
                arrResult[resultSize++] = arr[i];
            }

        } else {
            // If we are in a sequence and the next
            // element is different we indicate that
            // we are no longer in a sequence
            if (!(mAbs(arr[i] - arr[i + 1]) < EPS))
                inSequence = false;
        }
    }

    // After iterating through 0-th to n-2 index of
    // the original array we do a check for the
    // last element of the original array
    if (!inSequence)
        arrResult[resultSize++] = arr[n - 1];

    // Printing the resulting array
    for (unsigned i = 0; i < resultSize; ++i)
        std::cout << arrResult[i] << ' ';

    return 0;
}
