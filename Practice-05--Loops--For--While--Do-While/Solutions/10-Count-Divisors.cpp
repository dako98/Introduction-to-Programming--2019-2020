/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 10-Count-Divisors.cpp
 * @brief Solution for Problem 10 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read a whole number and print the
 * number of divisors of that number.
 */

#include <iostream>
#include <math.h>

int main() {

    int count = 0;
    int num;
    std::cin >> num;

    if (num < 0)
        num = -num;

    for (int i = 1; i*i <= num; i++) {
        if (num % i == 0) {
            if (num / i == i)
                count++;
            else
                count += 2;
        }
    }

    std::cout << "Number of divisors: " << count << std::endl;

    return 0;
}
