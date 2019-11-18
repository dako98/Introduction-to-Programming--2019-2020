/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 01-09-Solutions.cpp
 * @brief Solutions for problems 01 to 09 from Practice-06
 * @author Alexander Dimitrov
 */

#include <iostream>

double myAbs(double num);
int myMin(int num1, int num2);
int myMax(int num1, int num2);
bool areEqual(double num1, double num2, double eps);
long long myPow(int base, int exponent);
void mySwap(int& num1, int& num2);
bool isBitUp(unsigned int num, short bitPosition);
bool isPrime(unsigned int num);
unsigned int rev(unsigned int num);



int main()
{

    // Example usage
    std::cout << "myAbs(-2.5): " << myAbs(-2.5) << std::endl;
    std::cout << "myMin(2, 5): " << myMin(2, 5) << std::endl;
    std::cout << "myMax(2, 5): " << myMax(2, 5) << std::endl;
    std::cout << "areEqual(2.56711, 2.56755, 0.001): " << (areEqual(2.56711, 2.56755, 0.001) ? "true" : "false") << std::endl;
    std::cout << "areEqual(2.56711, 2.56755, 0.0001): " << (areEqual(2.56711, 2.56755, 0.0001) ? "true" : "false")  << std::endl;
    std::cout << "myPow(4, 12): " << myPow(4, 12) << std::endl;
    int num1 = 5, num2 = 8;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    std::cout << "Exectuing mySwap(num1, num2). " << std::endl;
    mySwap(num1, num2);
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;
    std::cout << "isBitUp(5, 1): " << (isBitUp(5, 1) ? "true" : "false") << std::endl;
    std::cout << "isBitUp(5, 2): " << (isBitUp(5, 2) ? "true" : "false") << std::endl;
    std::cout << "isPrime(1): " << (isPrime(1) ? "true" : "false") << std::endl;
    std::cout << "isPrime(2): " << (isPrime(2) ? "true" : "false") << std::endl;
    std::cout << "isPrime(5): " << (isPrime(5) ? "true" : "false") << std::endl;
    std::cout << "isPrime(42): " << (isPrime(42) ? "true" : "false") << std::endl;
    std::cout << "rev(234567): " << rev(234567) << std::endl;

    return 0;
}



double myAbs(double num)
{
    if (num < 0)
        return -num;
    else
        return num;
}


int myMin(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    // Since return stops the function execution
    // we don't need an else here
    return num2;
}


int myMax(int num1, int num2)
{
    // Using ternary operator
    return num1 > num2 ? num1 : num2;
}


bool areEqual(double num1, double num2, double eps)
{
    // |n1-n2| < eps is a boolean expression
    // that will give us true if the numbers
    // are equal with the given precision
    return myAbs(num1 - num2) < eps;
}


long long myPow(int base, int exponent)
{
    int result = 1;
    // Multiplying exponent times the base
    for (int i = 0; i < exponent; ++i)
        result *= base;
    return result;
}


void mySwap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

// bitPosition starting from 1 (LSB) to the size of uint
bool isBitUp(unsigned int num, short bitPosition)
{
    if (bitPosition < 1 || bitPosition > (sizeof(num)*8))
        return false;

    unsigned int mask = 1 << (bitPosition - 1);
    return num & mask;
}


bool isPrime(unsigned int num)
{
    // Base cases
    if (num == 0 || num == 1)
        return false;

    if (num == 2)
        return true;

    if (num % 2 == 0)
        return false;

    // If we find a number that divides our number
    // starting from 3 to the sqrt of the number
    // we'll know it's not a prime number so we return false
    for (unsigned int i = 3; i * i <= num; num += 2)
        if (num % i == 0)
            return false;

    // If we haven't found such number we return true
    return true;
}


unsigned int rev(unsigned int num)
{
    int result = 0;

    while (num > 0) {
        result *= 10;
        result += num % 10;
        num /= 10;
    }

    return result;
}

