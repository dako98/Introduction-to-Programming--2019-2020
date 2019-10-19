/*
 * По въведени две цели числа изведете в конзолата
 * цялата част и остатъка на частното получено
 * при деление на двете числа.
 */

#include <iostream>

using namespace std;

int main()
{
    int integer, divisor;

    cin >> integer >> divisor;

    cout << "Whole division: " << integer / divisor << endl;
    cout << "Remainder: " << integer % divisor << endl;

    return 0;
}
