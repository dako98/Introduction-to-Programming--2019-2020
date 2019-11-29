/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Print-Transpose-of-a-Matrix.cpp
 * @brief Solution for Problem 06 from Practice-08
 * @author Alexander Dimitrov
 *
 * Problem:
 * Write a function that accepts a matrix and
 * prints on the console its transpose.
 */

#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;


void fillMatrix(int mat[][MAX_COLS], int rows, int cols) {

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            std::cin >> mat[i][j];

}


void printTranspose(int mat[][MAX_COLS], int rows, int cols) {

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << mat[j][i] << '\t';
        }
        std::cout << std::endl;
    }

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

    std::cout << "Transpose of the matrix:" << std::endl;
    printTranspose(matrix, rows, cols);

    return 0;
}
