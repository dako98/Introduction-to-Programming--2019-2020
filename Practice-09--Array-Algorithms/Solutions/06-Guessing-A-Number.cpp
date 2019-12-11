 /**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Guessing-A-Number.cpp
 * @brief Solution for Problem 06 from Practice-09
 * @author Dako Dimov
 *
 * Problem:
 *  Write a program that guesses a number just
 *  by replying whether your number is higher
 *  or lower than the computer's guess.
 */

#include <iostream>

void guessNumber(int lower, int higher);

int main()
{
    int lower, higher;
    std::cout << "Enter lower limit: ";
    std::cin >> lower;
    std::cout << "Enter higher limit: ";
    std::cin >> higher;

    guessNumber(lower, higher);

    return 0;
}




void guessNumber(int lower, int higher)
{
    char answer;

    do
    {
        int middle = lower + (higher - lower) / 2;

        if (higher == lower) {
            std::cout << "Your number is: " << middle;
            return;
        }

        std::cout << "Is your number: " << middle << "?  ( (u)p / (d)own / (y)es )\n";
        do {
            std::cin >> answer;
        } while (answer != 'y' && answer != 'u' && answer != 'd');

        switch (answer) {
            case 'u':
                lower = middle + 1;
                break;
            case 'd':
                higher = middle - 1;
                break;

            default:
                break;
        }

    } while (answer != 'y');

}
