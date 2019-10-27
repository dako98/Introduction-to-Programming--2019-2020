/*
 * Изведете броя на цифрите на
 * въведено число без цикли
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Четем число
    int num;
    cout << "Enter a number: ";
    cin >> num;

    unsigned int numOfDigits = log10(num) + 1;

    // Извеждаме на конзолата
    cout << "Number of digits: ";
    cout << numOfDigits;

    return 0;
}
