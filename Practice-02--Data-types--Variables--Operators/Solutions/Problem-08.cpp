/*
 * Изчислете лицето на триъгълник по дадени две страни и ъгъл
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    double a, b, angle, area;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Angle = ";
    cin >> angle;

    angle /= 180;
    angle *= PI;

    area = 0.5 * a * b * sin(angle);

    cout << "Area of triangle is " << area << endl;

    return 0;
}
