/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 07-Simple-Calculator.cpp
 * @brief Solution for Problem 2 from Practice 3
 * @author Dako Dimov
 *
 * Задача:
 * При въвеждането на число символ и число
 * извършва операцията над двете числа (+, -, *, /)
 */

#include <iostream>

using namespace std;

int main()
{
    const double EPS = 0.000001;

    char operation;
    double num1, num2;

    // Приканващо съобщение и четене
    cout << "Enter an expression in this type NUM1 <+, -, * or /> NUM2:" << endl;
    cin >> num1 >> operation >> num2;

    // Проверяваме стойността на символа operation чрез switch
    switch (operation)
    {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            if (abs(num2) < EPS)
            {
                cout << "Cannot divide by 0!";
                break;
            }

            cout << num1 / num2;
            break;

        default:
            cout << "Invalid operation.";
                break;
    }

    return 0;
}
