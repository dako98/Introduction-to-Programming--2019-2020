/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 15-First-N-Prime-Numbers.cpp
 * @brief Solution for Problem 15 from Practice 5
 * @author Alexander Dimitrov
 * @author Todor Todorov
 *
 * Problem:
 * Read a whole positive number N and
 * print the first N prime numbers.
 */

#include <iostream>

int main()
{
    int N;
    unsigned num = 2;
    do {
        std::cout << "Enter the amount of primes: ";
        std::cin >> N;
    } while (N < 1);

    bool isPrime;
	unsigned primesFound = 0;
	while (primesFound < N)
	{
        if (num == 2) {
            isPrime = true;
            std::cout << num << ' ';
                ++primesFound;
            num = 3;
        } else {
            isPrime = (num % 2 == 1);
            for (int i = 3; isPrime && i * i <= num; i += 2)
                if (num % i == 0)
                    isPrime = false;

            if (isPrime)
            {
                std::cout << num << ' ';
                ++primesFound;
            }
            num += 2;
        }
    }

    std::cout << std::endl;

    return 0;
}
