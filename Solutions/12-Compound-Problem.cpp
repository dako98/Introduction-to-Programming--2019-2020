#include <iostream>

using namespace std;

int main()
{
    const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;

    unsigned int numA;
    short n1, n2, n3;
    cout << "Number: ";
    cin >> numA;
    cout << "Three bit positions [0, " << (SIZE_OF_UNS_INT - 1) << "]: ";
    cin >> n1 >> n2 >> n3;

    if (n1 < 0 || n1 >= SIZE_OF_UNS_INT ||
        n2 < 0 || n2 >= SIZE_OF_UNS_INT ||
        n3 < 0 || n3 >= SIZE_OF_UNS_INT)
    {
        cout << "Invalid bit position!\n";
        return 1;
    }

    unsigned int mask = 0;
    mask |= (1 << n1);
    mask |= (1 << n2);
    mask |= (1 << n3);

    unsigned int numB = numA | mask;
    unsigned int numC = numA * numB;

    cout << ~(numC ^ numA);

    return 0;
}
