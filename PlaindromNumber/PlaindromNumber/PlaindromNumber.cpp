
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

bool isPalindrom(int number)
{
    return number == ReverseNumber(number);
}

int main()
{
    if(isPalindrom(ReadPositvieNumber("enter a positive number")))
        cout << "\nYes, it is a Palindrome number.\n";
    else
        cout << "\nNo , it is NOT a Palindrome number.\n";
}
