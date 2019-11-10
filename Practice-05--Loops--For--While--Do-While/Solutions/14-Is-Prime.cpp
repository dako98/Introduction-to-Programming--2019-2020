/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 14-Is-Prime.cpp
 * @brief Solution for Problem 14 from Practice 5
 * @author Alexander Dimitrov
 * @author Todor Todorov
 *
 * Problem:
 * Read a whole positive number and
 * print wheter or not it's a prime.
 */

#include <iostream>

int main()
{
    int num = 0;
    std::cin >> num;

    if (num < 0)
    {
        std::cout << "Wrong input!" << std::endl;
        return 1;
    }

    if (num == 1)
    {
        std::cout << num << " is not a prime number" << std::endl;
        return 0;
    }

    if (num == 2)
    {
        std::cout << num << " is a prime number" << std::endl;
        return 0;
    }

    bool isPrime = (num % 2 == 1);
    for (int i = 3; isPrime && i * i <= num; i += 2)
        if (num % i == 0)
            isPrime = false;

    std::cout
        << num << (isPrime ? " is a " : " is not ")
        << "a prime number" << std::endl;

    return 0;
}
