#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cout << "Number: ";
    cin >> num;

    unsigned int mask = 1;  // 00...00001
    mask = (mask << 1) | 1; // 00...00011
    mask = (mask << 1) | 1; // 00...00111
    mask = (mask << 1) | 1; // 00...01111
    mask = (mask << 1) | 1; // 00...11111

    cout << (num ^ mask);

    return 0;
}
