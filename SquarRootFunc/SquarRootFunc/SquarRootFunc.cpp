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

float MySequarRootFunc(float number)
{
    return pow(number, .5);
}

int main()
{
    float number = ReadNumber();
    cout << "\nmy Sequar Root result: " << MySequarRootFunc(number);

    cout << "\nc++ Sequar Root result: " << sqrt(number);

}

