// AbsouluteFunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadNumber()
{
    float Number;  

    cout << "Please enter a number? ";
    cin >> Number;  

    return Number;  

}

float MyAbsFunc(float number)
{
    if (number > 0)
        return number;

    return number * -1;
}

int main()
{
    float number = ReadNumber();
    cout<<"\nmy abs result: "<< MyAbsFunc(number);

    cout << "\nc++ abs result: " << abs(number);

}

