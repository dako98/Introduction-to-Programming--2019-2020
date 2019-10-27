/*
 * Изведете дали въведеното число е четно или нечетно
 */

#include <iostream>

using namespace std;

int main()
{

    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Тестваме чрез тернарен оператор
    cout << (num % 2 ? "It's odd" : "It's even");

    return 0;
}
