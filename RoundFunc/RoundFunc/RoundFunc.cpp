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

int Reminder(int number)
{
    return number % 10;
}

int reamoveReminder(float number)
{
    return number * 10;
}
int MyRoundFunc(float number)
{
    if (number >= 0)
    {
        return int(number + .5);
    }
    else
    {
        return int(number - .5);
    }
}

int main()
{
    float number = ReadNumber();
    cout << "\nmy round result: " << MyRoundFunc(number);

    cout << "\nc++ round result: " << round(number);

}

