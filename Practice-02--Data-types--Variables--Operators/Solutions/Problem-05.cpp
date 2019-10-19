/*
 * По въведени две числа a и b, разменете
 * стойностите им и ги изведете на екрана.
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    // Чрез допълнителна променлива
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
