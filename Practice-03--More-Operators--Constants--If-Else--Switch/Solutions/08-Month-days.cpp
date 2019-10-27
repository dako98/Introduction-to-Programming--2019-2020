
/*
 * При въвеждането на число символ и число
 * извършва операцията над двете числа (+, -, *, /)
 */

#include <iostream>

using namespace std;

int main()
{
    // Четем месеца
    short month;
    cout << "Enter month number [1-12]: ";
    cin >> month;

    unsigned short days = 29;

    // Добавяме на +1 или +2 зависимост от месеца
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            ++days;
        case 4:
        case 6:
        case 9:
        case 11:
            ++days;
            break;
        case 2:
            cout << "GOD KNOWS!" << endl;
            return 0;
    }

    // Извеждаме дните
    cout << days;

    return 0;
}
