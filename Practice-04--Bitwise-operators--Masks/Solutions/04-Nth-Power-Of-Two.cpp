#include <iostream>

using namespace std;

int main()
{
    unsigned int power;
    cin >> power;

    cout << "2 to the power of " << power << " is "
         << (1 << power);

    return 0;
}
