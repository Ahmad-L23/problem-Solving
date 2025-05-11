// AbsouluteFunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber(string messaeg)
{
    float Number;

    cout << messaeg;
    cin >> Number;

    return Number;

}

float GetFraction(float number)
{
    return number - int(number);
}

float MyPowerFunc(float base, float exponent)
{
    bool isNegative = false;
    float result = 1.0;
    if (exponent < 0)
    {
        isNegative = true;
        exponent *= -1;
    }

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    return isNegative ? 1.0 / result : result;
}

int main()
{
    float base = ReadNumber("pleas Enter the base: ");
    float exponent = ReadNumber("\npleas Enter exponent: ");
    cout << "\nmy floor result: " << MyPowerFunc(base, exponent);

    cout << "\nc++ power result: " << pow(base, exponent);

}

