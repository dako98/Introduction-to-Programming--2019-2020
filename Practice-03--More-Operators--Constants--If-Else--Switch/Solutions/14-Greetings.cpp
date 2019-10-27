/*
 * Въвежда се час и се извежда “Good morning!”, 
 * “Good day!”, “Good evening!” или “Good night!”.
 * Проверете дали часът е валиден.
 */

#include<iostream>

using namespace std;

int main()
{
    int hour, minutes;
    char ones, tens, formatCharacter;

    cin >> tens >> ones;

    hour = (tens-'0')*10 + (ones-'0');

    cin >> formatCharacter;

    cin >> tens >> ones;

    minutes = (tens-'0')*10 + (ones-'0');

    if (hour < 24 || hour >= 0
    || minutes >= 0 || minutes < 60
    || formatCharacter == ':')
    {
        if (hour > 0 && hour <= 7)
        {
            cout << "Good morning!";
        }
        else if (hour > 7 && hour <= 14)
        {
            cout << "Good day!";
        }
        else if (hour > 14 && hour <= 18)
        {
            cout << "Good evening!";
        }
        else
        {
            cout << "Good night!";
        }
    }        
    else
    {
        cout << "Wrong time.";
        return 1;
    }
    
    return 0;
}
