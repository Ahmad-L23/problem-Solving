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


int MyFloorFunc(float number)
{
    if (number >= 0)
    {
        return int(number);
    }
    else
    {
        return int(--number);
    }
}

int main()
{
    float number = ReadNumber();
    cout << "\nmy floor result: " << MyFloorFunc(number);

    cout << "\nc++ floor result: " << floor(number);

}

