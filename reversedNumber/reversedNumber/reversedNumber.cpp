

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



void ReverseNumber(int number)
{
    int reminder = 0;
    while (number > 0)
    {
        reminder = number % 10;
        number = number / 10;
        cout << reminder << endl;
    }
}

int main()
{
    ReverseNumber(ReadPositvieNumber("pleas enter a positive number"));
}
