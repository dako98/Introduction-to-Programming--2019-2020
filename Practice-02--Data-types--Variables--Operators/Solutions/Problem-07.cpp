/*
 * Прочетете три числа (дължини на страни на триъгълник)
 * и изведете лицето му.
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, p, area;

    cin >> a >> b >> c;

    p = (a + b + c) / 2;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Area of triangle is " << area << endl;

    return 0;
}
