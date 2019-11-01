#include <iostream>

using namespace std;

int main()
{
    const short SIZE_OF_UNS_INT = sizeof(unsigned int) * 8;

    unsigned int num;
    short N;
    cout << "Number: ";
    cin >> num;
    cout << "Bit position [0, " << (SIZE_OF_UNS_INT - 1) << "]: ";
    cin >> N;

    if (N < 0 || N >= SIZE_OF_UNS_INT) {
        cout << "Invalid bit position!\n";
        return 1;
    }

    // Маска с нула на N-тия бит
    unsigned int mask = ~(1 << N);

    cout << (num & mask);

    return 0;
}
