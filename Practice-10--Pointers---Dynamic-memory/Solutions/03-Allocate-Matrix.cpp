 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 03-Allocate-Matrix.cpp
 * @brief Solution for Problem 03 from Practice-10
 * @author Alexander Dimitrov
 *
 * Problem:
 *  Write a function that allocates memory for
 *  a matrix with a given amount of rows and collumns
 *  and returns a pointer to the allocated memory.
 */
#include <iostream>

int** allocateMatrix(int rows, int cols)
{
    // Allocating an array of pointers for each row
    int** pResult = new (std::nothrow) int*[rows];
    if (!pResult)
        return nullptr;

    // Allocating an array of integers on each row
    int count;
    for (count = 0; count < rows; count++) {
        pResult[count] = new (std::nothrow) int[cols];
        // If there wasn't enough memory for a row we stop allocating
        if (!pResult)
            break;
    }

    // If the allocated rows are less than the requested rows
    if (count < rows) {
        // Delete all the previously allocated rows
        while (count > 0) {
            count--;
            delete[] pResult[count];
        }
        // And the allocated pointers
        delete[] pResult;
        pResult = nullptr;
    }

    return pResult;
}



int main()
{
    int rows, cols;

    std::cout << "Enter the dimensions of the matrix: ";
    std::cin >> rows >> cols;

    int** pMat = allocateMatrix(rows, cols);

    if (!pMat) {
        std::cout << "Not enough memory!" << std::endl;
        return 1;
    }

    // Testing by entering the elements of the matrix through the console
    std::cout << "Enter " << rows * cols << " numbers:" << std::endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            std::cin >> pMat[i][j];

    // And printing them on the console
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << pMat[i][j] << ' ';
        std::cout << std::endl;
    }

    // DO NOT FORGET TO DELETE YOUR MEMORY!
    // First delete each allocated row
    for (int i = 0; i < rows; i++)
        delete[] pMat[i];

    // And finnaly the pointers array
    delete[] pMat;

    return 0;
}
