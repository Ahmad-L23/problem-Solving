
#include <iostream>
using namespace std;

enum enDivisableNotDibisalbe{divisable =1, notDivisable=2};

int ReadPositvieNumber(string message)
{
    int number = 0;

    do {
        cout << message<<endl;
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

void printPerfectNumber(int number)
{
    if (isPerfectNumber(number))
        cout << number << " is perfect" << endl;
    else
        cout << number << " is not perfect" << endl;
}

int main()
{
    printPerfectNumber(ReadPositvieNumber("pleas Enter a Positive Number"));
}

