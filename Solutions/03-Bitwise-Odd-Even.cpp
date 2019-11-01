#include <iostream>

using namespace std;

int main()
{
    unsigned int num;
    cin >> num;

    if ((num & 1) == 0)
        cout << "even\n";
    else
        cout << "odd\n";

    return 0;
}
