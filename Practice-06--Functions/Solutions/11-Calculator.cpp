/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 11-Calculator.cpp
 * @brief Solution for Problem 11 from Practice 6
 * @author Alexander Dimitrov 
 * @author Dako Dimov
 *
 * Problem:
 * Create a simple calculator
 * divided in functions.
 */

#include <iostream>

long long myPow(int base, unsigned int exponent)
{
    long long result = 1;
    for (unsigned int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}

double sum(double num1, double num2)
{
    return num1 + num2;
}

double diff(double num1, double num2)
{
    return num1 - num2;
}

double prod(double num1, double num2)
{
    return num1 * num2;
}

double quot(double num1, double num2)
{
    return num1 / num2;
}


int main()
{

    std::cout << "Write an expression in the form NUM [operation] NUM." << std::endl;
    std::cout << "Supported operations: +, -, *, /, ^" << std::endl;

    char operation;
    double num1, num2;
    std::cin >> num1 >> operation >> num2;

    switch (operation) {
        case '^':
            if (num2 < 0)
            {
                std::cout << "Negative powers not supported!" << std::endl;
                break;
            }
            std::cout << "Power only supported for whole numbers. Calculating "
                << (int)num1 << " ^ "
                << (unsigned)num2 << " = "
                << myPow(num1, num2) << std::endl;
            break;

        case '+':
            std::cout << sum(num1, num2) << std::endl;
            break;

        case '-':
            std::cout << diff(num1, num2) << std::endl;
            break;

        case '*':
            std::cout << prod(num1, num2) << std::endl;
            break;

        case '/':
            std::cout << quot(num1, num2) << std::endl;
            break;

        default:
            std::cout << "Unsupported operation!" << std::endl;
            break;
    }

    return 0;
}
