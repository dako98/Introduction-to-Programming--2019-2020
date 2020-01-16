/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-2.cpp
 * @brief Solution for Sample Problem 2 from Exam-Preparation-02
 * @author Alexander Dimitrov
 */

#include <iostream>

// Number of coefficients in the quadratic equations
const int COEFFICIENTS_COUNT = 3;

// Epsilon small number used for checking roots
const float EPS = 0.00001;

// returns the absolute value of the given float
inline float abs(float num)
{
    return num > 0 ? num : -num;
}

// returns the absolute value of the given int
inline int abs(int num)
{
    return num > 0 ? num : -num;
}

// checks if root is a solution to the given equation
inline bool isRoot(const float* eq, int root)
{
    return abs(eq[0] * root * root + eq[1] * root + eq[2]) < EPS;
}

// prints a formatted equation
void printEquation(const float* eq)
{
    for (int i = 0; i < COEFFICIENTS_COUNT; i++) {
        if (eq[i] != 0) {
            std::cout << (eq[i] > 0 ? (i != 0 ? "+ " : "") : "- ");

            if (abs(eq[i]) != 1)
                    std::cout << abs(eq[i]);

            if (i == 0)
                std::cout << "x^2 ";
            else if (i == 1)
                std::cout << "x ";
        }
    }
    std::cout << "\n";
}

// deletes an allocated matrix
void cleanMatrix(float** mat, int size)
{
    for (int i = 0; i < size; i++)
        delete[] mat[i];
    delete[] mat;
}


int main()
{

    int numOfEqs;
    std::cin >> numOfEqs;
    if (numOfEqs <= 0) {
        std::cout << "Wrong number of equations!\n";
        return 1;
    }

    // Creating a dynamic array of equations
    float** eqsArr = new (std::nothrow) float*[numOfEqs];
    
    if (!eqsArr) {
        std::cout << "Not enough memory!\n";
        return 2;
    }

    // Creating each equation
    for (int i = 0; i < numOfEqs; i++)
    {
        eqsArr[i] = new (std::nothrow) float[COEFFICIENTS_COUNT];
        if (!eqsArr[i]) {
            std::cout << "Not enough memory!\n";
            // Don't forget to delete your memory!
            cleanMatrix(eqsArr, i);
            return 2;
        }
    }

    // Entering the equations
    for (int i = 0; i < numOfEqs; i++)
        for (int j = 0; j < COEFFICIENTS_COUNT; j++)
            std::cin >> eqsArr[i][j];

    // Entering possible roots of the equations
    int numOfPR;
    std::cin >> numOfPR;
    if (numOfPR < 0) {
        std::cout << "Wrong number of integers!\n";
        // Don't forget to delete your memory!
        cleanMatrix(eqsArr, numOfEqs);
        return 1;
    }

    // Creating an array for the possible roots
    int* possibleRoots = new (std::nothrow) int[numOfPR];
    if (!possibleRoots) {
        std::cout << "Not enough memory!\n";
        // Don't forget to delete your memory!
        cleanMatrix(eqsArr, numOfEqs);
        return 2;
    }
    
    // Adding the possible roots in the array
    for (int i = 0; i < numOfPR; i++)
        std::cin >> possibleRoots[i];

    // Going through each equation to search for roots
    for (int i = 0; i < numOfEqs; i++) {
        for (int j = 0; j < numOfPR; j++) {
            if (isRoot(eqsArr[i], possibleRoots[j])) {
                printEquation(eqsArr[i]);
                break;
            }
        }
    }

    // Don't forget to delete your memory!
    cleanMatrix(eqsArr, numOfEqs);
    delete[] possibleRoots;

    return 0;
}

/*
 * Example input:
 * 5
 * 1 -9 20      // Roots: 5 4
 * 1 6 5        // Roots: -5 -1
 * -1 -3 54     // Roots: 6 -9
 * 1 -12 32     // Roots: 8 4
 * 1 16 63      // Roots: -7 -9
 *
 * 7
 * -9 5 10 12 4 0 -8
 *
 * Example output:
 * x^2 - 9x + 20
 * - x^2 - 3x + 54
 * x^2 - 12x + 32
 * x^2 + 16x + 63
 *
 */
