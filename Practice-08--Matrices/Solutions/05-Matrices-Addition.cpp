/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 05-Matrices-Addition.cpp
 * @brief Solution for Problem 05 from Practice-08
 * @author Alexander Dimitrov
 *
 * Problem:
 * Write a function that accepts two matrices and prints
 * on the console the result of adding them together
 */

#include <iostream>

const int MAX_ROWS = 100;
const int MAX_COLS = 100;


void fillMatrix(int mat[][MAX_COLS], int rows, int cols) {

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            std::cin >> mat[i][j];

}


void printAddition(int mat1[][MAX_COLS], int mat2[][MAX_COLS], int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << mat1[i][j] + mat2[i][j] << '\t';
        }
        std::cout << std::endl;
    }

}



int main() {

    int matrix1[MAX_ROWS][MAX_COLS];
    int matrix2[MAX_ROWS][MAX_COLS];
    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    std::cout << "Enter elements of the first matrix:" << std::endl;
    fillMatrix(matrix1, rows, cols);
    std::cout << "Enter elements of the second matrix:" << std::endl;
    fillMatrix(matrix2, rows, cols);

    std::cout << "Result when adding the two matrices:" << std::endl;
    printAddition(matrix1, matrix2, rows, cols);

    return 0;
}
