/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 17-Print-Fibonacci-Sequence.cpp
 * @brief Solution for Problem 17 from Practice 5
 * @author Alexander Dimitrov
 * @author Todor Todorov
 *
 * Problem:
 * Read a whole positive number N
 * and print N terms from the Fibonacci sequence.
 */

#include <iostream>

int main()
{
    int N;
    do {
        std::cout << "Enter a whole positive number: ";
        std::cin >> N;
    } while (N < 1);

    unsigned long long n1 = 0, n2 = 1;
    unsigned long long temp;
    for (int i = 0; i < N; i++)
    {
        std::cout << n2 << ' ';

        temp = n2;
        n2 += n1;
        n1 = temp;
    }

    std::cout << std::endl;

    return 0;
}
