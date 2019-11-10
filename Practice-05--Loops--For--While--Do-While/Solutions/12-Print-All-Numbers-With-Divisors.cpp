/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 12-Print-All-Numbers-With-Divisors.cpp
 * @brief Solution for Problem 12 from Practice 5
 * @author Ignat Ivanov
 *
 * Problem:
 * Read four whole numbers limit, div1, div2 and div3
 * and print all numbers from 0 to limit that are
 * divisible by div1, div2 and div3 at the same time.
 */

#include <iostream>

int main() {

    int limit, divisor1, divisor2, divisor3;
    std::cin >> limit >> divisor1 >> divisor2 >> divisor3;

    if (limit < 0)
    {
        std::cout << "Limit must be positive!" << std::endl;
        return 1;
    }

    if (divisor1 == 0 || divisor2 == 0 || divisor3 == 0)
    {
        std::cout << "Can not devide by zero!" << std::endl;
        return 1;
    }


    for (int i = 0; i <= limit; i++)
        if ((i % divisor1 == 0) && (i % divisor2 == 0) && (i % divisor3 == 0))
            std::cout << i << ' ';

    std::cout << std::endl;

    return 0;
}
