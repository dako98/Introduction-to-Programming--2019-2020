/*
 * Изведете абсолютната стойност на въведено число
 */

#include<iostream>

using namespace std;

int main()
{
    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Абс. стойност чрез тернарен оператор
    unsigned int absValue = num < 0 ? -num : num;

    // Извеждаме на конзолата
    cout << "It's absolute value is: ";
    cout << absValue;

    return 0;
}
