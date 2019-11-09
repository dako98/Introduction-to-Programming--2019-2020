/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file Problem-06.cpp
 * @brief Solution for Problem 6 from Practice 2
 * @author Alexander Dimitrov
 * @author Dako Dimov
 *
 * Задача:
 * Прочетете цяло число от конзолата и изведете цифрата на десетиците му.
 */

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    cout << (num / 10) % 10 << endl;

    return 0;
}
