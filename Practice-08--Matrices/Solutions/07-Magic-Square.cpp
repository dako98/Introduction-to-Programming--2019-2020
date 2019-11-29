/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 07-Magic-Square.cpp
 * @brief Solution for Problem 07 from Practice-08
 * @author Alexander Dimitrov
 *
 * Problem:
 * Write a function that accepts a matrix and
 * returns whether or not it's a magic square.
 */

#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;


void fillMatrix(int mat[][MAX_COLS], int rows, int cols) {

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            std::cin >> mat[i][j];

}


bool isMagicSquare(int mat[][MAX_COLS], int rows, int cols) {

    if (rows != cols)
        return false;

    int diagSum = 0;
    int diag2Sum = 0;

    for (int i = 0; i < rows; i++) {
        diagSum += mat[i][i];
        diag2Sum += mat[i][cols - 1 - i];
    }

    if (diagSum != diag2Sum)
        return false;

    int currRowSum;
    int currColSum;
    for (int i = 0; i < rows; i++) {

        currRowSum = 0;
        currColSum = 0;

        for (int j = 0; j < cols; j++) {
            currRowSum += mat[i][j];
            currColSum += mat[j][i];
        }

        if (currColSum != diagSum || currRowSum != diagSum)
            return false;

    }

    return true;
}



int main() {

    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    std::cout << "Enter elements of the matrix:" << std::endl;
    fillMatrix(matrix, rows, cols);

    std::cout << "The Matrix is "
        << (isMagicSquare(matrix, rows, cols) ? "" : "not ")
        << "a magic square." << std::endl;

    return 0;
}
