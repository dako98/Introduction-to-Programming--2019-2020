/*
 * По въведени три числа a, b и c да се изчисли
 * дължината на тримерния вектор v(a, b, c).
 */

#include <iostream>
#include <math.h>   // Библиотека за математически функции

using namespace std;

int main()
{
    double a, b, c, length;
	
    cin >> a >> b >> c;

    length = sqrt(a * a + b * b + c * c);

    cout << "Length = " << length;

    return 0;
}
