/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 05-Sum-in-Range.cpp
 * @brief Solution for Problem 5 from Practice 5
 * @author Alexander Dimitrov
 *
 * Problem:
 * Read two whole numbers N and M and sum
 * all the numbers in the range [N, M].
 */

#include <iostream>

int main() {

    long long num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        long long temp = num1;
        num1 = num2;
        num2 = temp;
    }

    /// Това е много бавно за по-големи числа!
    // long long sum = 0;
    // for (int i = num1; i <= num2; i++)
    //     sum += i;

    /// Когато можем - използваме математика!
    // Формула за сума на аритметична прогресия
    long long sum = (num1 + num2) * (num2 - num1 + 1) / 2;

    // При делението не е 2.0, а само 2 защото
    // знаем че сумираме само цели числа
    // => сумата ще бъде цяло число

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}
