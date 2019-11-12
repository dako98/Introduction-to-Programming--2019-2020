/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 12-Closest-power-of-two.cpp
 * @brief Solution for Problem 12 from Practice 3
 * @author Alexander Dimitrov
 *
 * Задача:
 * Изведете най-близката степен на 2, която е по-голяма
 * от подадено цяло, неотрицателно число N (без цикли!).
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Четем числото
    int N;
    cin >> N;

    // Валидираме входа
    if (N < 0) {
        cout << "Wrong input!\n";
    } else {
        // Смятаме степента чрез log при основа 2
        unsigned short power = log2(N) + 1;
        cout << "Closest power of 2 larger than " << N
             << " is\n2 to the power of " << power
             << " = " << pow(2, power) << endl;
	}

    return 0;
}
