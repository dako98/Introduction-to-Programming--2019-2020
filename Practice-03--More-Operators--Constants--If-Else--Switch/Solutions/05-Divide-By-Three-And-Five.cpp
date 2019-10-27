/*
 * Изведете дали число се дели на 5 или на 3
 */

#include <iostream>

using namespace std;

int main()
{
    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Запазваме дали числото се дели на 5 и 3 в променливи
    bool byThree, byFive;
    byThree = num % 3 == 0;
    byFive = num % 5 == 0;

    // Начално съобщение
    cout << num << " is ";

    // Ако се дели на 5
    if (byFive)
    {
        // Извеждаме подходящо съобщение
        cout << "divisible by 5";

        // Ако се дели и на 3 допълваме съобщението
        if (byThree)
            cout << " and 3";
    }
    else if (byThree) {
        // Ако не се дели на 5, но се дели на 3
        cout << "divisable by 3";
    } else {
        // Ако не се дели на нито едно от двете
        cout << "not divisable by 5 or 3";
    }

    // Във всеки случай слагаме точка и нов ред накрая
    cout << ".\n";

    return 0;
}
