#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;

    if (num != 0 && (num & (num - 1)) == 0)
        cout << "It's a power of two.\n";
    else
        cout << "It's NOT a power of two.\n";

    return 0;
}
