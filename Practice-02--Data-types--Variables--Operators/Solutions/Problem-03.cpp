/*
 * �� �������� ��� ����� a, b � c �� �� �������
 * ��������� �� ��������� ������ v(a, b, c).
 */

#include <iostream>
#include <math.h>   // ���������� �� ������������� �������

using namespace std;

int main()
{
    double a, b, c, length;
	
    cin >> a >> b >> c;

    length = sqrt(a * a + b * b + c * c);

    cout << "Length = " << length;

    return 0;
}
