/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 10-Pascal-Triangle.cpp
 * @brief Solution for Problem 10 from Practice 6
 * @author Alexander Dimitrov
 *
 * Problem:
 * Write a function that prints the first
 * N rows of the Pascal Triangle.
 */

#include <iostream>

void printPascalTriangle(int rows)
{
    int coef = 1;
    for(int i = 0; i < rows; i++)
    {
        // Printing whitespaces (tabs) before the row
        for(int j = 1; j <= rows-i; j++)
            std::cout << '\t';

        for(int k = 0; k <= i; k++)
        {
            // Starting from 1
            if (i == 0 || k == 0) {
                coef = 1;
            } else {
                // Calculating the coefficient
                coef = coef * ( i - k + 1) / k;
            }
            // Adding whitespaces (tabs) after the coefficient
            std::cout << coef << "\t\t";
        }
        // End of row
        std::cout << std::endl;
    }
}



int main()
{

    int rows;
    do {
        std::cout << "Enter number of rows: ";
        std::cin >> rows;
    } while (rows < 1);

    printPascalTriangle(rows);

    return 0;
}
