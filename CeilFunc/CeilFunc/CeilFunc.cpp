// AbsouluteFunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

float ReadNumber()
{
    float Number;

    cout << "Please enter a number? ";
    cin >> Number;

    return Number;

}

float GetFraction(float number)
{
    return number - int(number);
}

int MyCeilFunc(float number)
{
    if (abs(GetFraction(number)) > 0)
    {
        if (number >= 0)
            return int(++number);

        else
            return int(number);
    }
    else
        return number;
}

int main()
{
    float number = ReadNumber();
    cout << "\nmy floor result: " << MyCeilFunc(number);

    cout << "\nc++ floor result: " << ceil(number);

}

