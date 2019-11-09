/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 06-Day-of-the-week.cpp
 * @brief Solution for Problem 6 from Practice 3
 * @author Alexander Dimitrov
 *
 * Задача:
 * При въвеждането на число от 1 до 7
 * изведете съответстващия ден от седмицата
 */

#include <iostream>

using namespace std;

int main() {

    // Четем малко число от конзолата
    short day;
    cout << "Enter a number in the range [1, 7]: ";
    cin >> day;

    // Проверяваме чрез switch
    // и извеждаме съответния ден
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day";
            break;
    }

    // Във всеки случай извеждаме точка и нов ред
    cout << ".\n";

    return 0;
}
