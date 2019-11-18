/**
 * This file is part of the Introduction to Programming
 * course 2019/20 held by Alexander and Dako.
 * @file 12-13-Problem-Solutions.cpp
 * @brief Solution for Problems 12 to 13 from Practice 6
 * @author Alexander Dimitrov
 */

#include <iostream>

unsigned long long rectArea(unsigned width, unsigned height)
{
    return (unsigned long long)width * height;
}

float CtoF(float celsius)
{
    return celsius * 9 / 5 + 32;
}


int main()
{

    std::cout << rectArea(4, 5) << std::endl;
    std::cout << CtoF(22.5);

    return 0;
}
