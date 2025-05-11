// PrintPerfectNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int ReadPositvieNumber(string message)
{
    int number = 0;

    do {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);

    return number;
}

bool isPerfectNumber(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }
    return number == sum;
}

void PrintPerfectNumbersFrom1ToN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (isPerfectNumber(i))
            cout << i << endl;
    }
}

int main()
{
    PrintPerfectNumbersFrom1ToN(ReadPositvieNumber("pleas Enter a positive number"));
}