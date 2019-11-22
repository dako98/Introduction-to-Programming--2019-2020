/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Replace-Repeating.cpp
 * @brief Solution for Sample Problem 03
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

    std::cout << "Enter the elements: ";
    for (unsigned i = 0; i < n; ++i) {
        std::cin >> arr[i];
        average += arr[i];
    }
    average /= n;

    float last;
    for (unsigned i = 1; i < n; ++i) {
        last = arr[i - 1];
        if (mAbs(last - arr[i]) < EPS) {
            unsigned count = 2;
            for (unsigned j = i + 1; j < n; ++j) {
                if (abs(last - arr[j]) < EPS) {
                    ++count;
                } else {
                    break;
                }
            }

            if (count >= 3) {
                arr[i - 1] = average;
                for (unsigned j = i; j < n - count + 1; ++j) {
                    arr[j] = arr[j + count - 1];
                }
                n -= (count - 1);
            }

        }
    }

    for (unsigned i = 0; i < n; ++i)
        std::cout << arr[i] << ' ';

    return 0;
}
