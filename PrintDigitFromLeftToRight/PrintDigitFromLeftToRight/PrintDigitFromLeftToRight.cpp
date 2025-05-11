
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


int ReverseNumber(int number)
{
    int reminder = 0, number2 = 0;
    while (number > 0)
    {
        reminder = number % 10;

        number /= 10;

        number2 = number2 * 10 + reminder;
    }
    
    return number2;
}

void printAllDigitsFromLeftToRight(int number)
{
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;

        cout << reminder<<endl;

        number /= 10;
    }

}

int main()
{
    printAllDigitsFromLeftToRight(ReverseNumber(ReadPositvieNumber("Please enter a number?")));
}
