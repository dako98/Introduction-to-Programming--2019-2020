/*
 * Прочетете един символ от конзолата и изведете дали е главна
 * буква, малка буква, цифра или друг символ.
 */

#include <iostream>
using namespace std;

int main()
{
    // Четем един символ от конзолата
    char c;
    cin >> c;

    // Проверяваме къде се намира в ASCII таблицата
    if (c >= 'a' && c <= 'z')
        cout << "Lowercase";
    else if (c >= 'A' && c <= 'Z')
        cout << "Uppercase";
    else if (c >= '0' && c <= '9')
        cout << "Digit";
    else
        cout << "Other symbol";

    cout << endl;

    return 0;
}
