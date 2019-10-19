/*
 * Прочетете цяло число от конзолата и изведете цифрата на десетиците му.
 */

#include <iostream>

using namespace std;

int main()
{
    int num;

    cin >> num;

    cout << (num / 10) % 10 << endl;

    return 0;
}
