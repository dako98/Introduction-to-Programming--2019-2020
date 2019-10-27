/*
 * Изведете най-близката степен на 2, която е по-голяма
 * от подадено цяло, неотрицателно число N (без цикли!).
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Четем числото
    int N;
    cin >> N;

    // Валидираме входа
    if (N < 0) {
        cout << "Wrong input!\n";
    } else {
        // Смятаме степента чрез log при основа 2
        unsigned short power = log2(N) + 1;
        cout << "Closest power of 2 larger than " << N
             << " is\n2 to the power of " << power
             << " = " << pow(2, power) << endl;
	}

    return 0;
}
