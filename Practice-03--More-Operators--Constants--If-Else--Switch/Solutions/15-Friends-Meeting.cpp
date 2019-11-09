/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 15-Friends-Meeting.cpp
 * @brief Solution for Problem 15 from Practice 3
 * @author Dako Dimov
 *
 * Задача:
 * Двама приятели искат да си уговорят среща за поне 30 минути.
 * Всеки определя време, в което е свободен, като посочи начален
 * и краен час. Помогнете им да изберат време за срещата си,
 * ако това е възможно, и изведете надпис “No meeting!”,
 * ако не е възможно.
 */

#include<iostream>

using namespace std;

int main()
{
    short start1, end1, start2, end2;
    short time;
    char tens, ones;

    // Въвеждане на данните.

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';    // Съставяме си часа.

    start1 = time*60;                   // Преобразуваме времето в минути.
    cin >> ones;                        // Прочитаме ":".

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';    // Съставяме си минутите.

    start1 += time;                     // Началният час на първия.

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';    // Съставяме си часа.

    end1 = time*60;                     // Преобразуваме времето в минути.
    cin >> ones;                        // Прочитаме ":".

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';

    end1 += time;                       // Крайният час на първия.


    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';    // Съставяме си часа.

    start2 = time*60;                   // Преобразуваме времето в минути.
    cin >> ones;                        // Прочитаме ":".

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';

    start2 += time;                     // Началният час на втория.

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';    // Съставяме си часа.

    end2 = time*60;                     // Преобразуваме времето в минути.
    cin >> ones;                        // Прочитаме ":".

    cin >> tens >> ones;
    time = (tens-'0')*10 + ones-'0';

    end2 += time;                       // Крайният час на втория.

    // Край на входа

    short earliestStart = start1 < start2 ? start2 : start1;    // Взимаме най-ранния час, който устройва и двамата.
    short latestEnd = end1 < end2 ? end1 : end2;                // Взимаме най-късния час, който устройва и двамата.

    if (latestEnd-earliestStart<30)
    {
        cout << "No meeting";
    }
    else
    {
        int hours, minutes;
        hours = earliestStart/60;
        minutes = earliestStart%60;
        cout << hours << ':' << minutes;
    }

    return 0;
}
