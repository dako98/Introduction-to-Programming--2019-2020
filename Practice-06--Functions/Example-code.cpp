#include <iostream>
#include <math.h>

// Function declarations
void greetings();
int sum(int num1, int num2);
double sum(double num1, double num2);
int multiply(int a, double b);
int multiply(double a, int b);
bool somethingComplex();
void neg(int& num);
long long pow(int base, int exponent);
void greetingsSpammer(int count = 100);
void swapInts(int& a, int& b);

// Tip: In Visual Studio clicking on a
// function name and then pressing F12 will
// show you the function's definition.


// Starting function of our program
int main()
{
    greetings();

    double a1 = 1.5, b1 = 2.7;
    int a2 = 1, b2 = 2;


    std::cout << sum(a1, b1) << std::endl;
    std::cout << sum(a2, b2) << std::endl;

    //std::cout << multiply(a1, b1);
    //std::cout << multiply(a2, b2);

    std::cout << "a2 is " << a2 << std::endl;
    neg(a2);
    std::cout << "After negating a2 is " << a2 << std::endl;

    int num1 = 7;
    int num2 = 9;
    std::cout << "num1 is " << num1 << std::endl;
    std::cout << "num2 is " << num2 << std::endl;
    swapInts(num1, num2);
    std::cout << "After swapping num1 and num2" << std::endl;
    std::cout << "num1 is now " << num1 << std::endl;
    std::cout << "num2 is now " << num2 << std::endl;

    // Calls our function pow(int, int)
    std::cout << pow(2, 5) << std::endl;

    // Calls the function pow(int, int) from math.h
    std::cout << std::pow(2, 5) << std::endl;

    greetingsSpammer(6);

    return 0;
}



void greetings()
{
    std::cout << "Hello world!" << std::endl;
}


// Basic sum function
int sum(int num1, int num2)
{
    return num1 + num2;
}


// Overloaded function
double sum(double num1, double num2)
{
    return num1 + num2 + 5.0;
}


// Ambiguous function 1
int multiply(int a, double b)
{
    return a * b;
}


// Ambiguous function 2
int multiply(double a, int b)
{
    return a * b + 42.0;
}


void greetingsSpammer(int count)
{
    for (int i = 0; i < count; i++)
        greetings();
}


void neg(int& num)
{
    num = -num;
}


long long pow(int base, int exponent)
{
    long long result = 1;
    for (long long i = 0; i < exponent; i++)
        result *= base;
    return result;
}


void swapInts(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
