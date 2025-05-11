
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
    int reversdNumber = 0;
    while (number > 0)
    {
        reminder = number % 10;
        reversdNumber = reversdNumber * 10 + reminder;
        
        number = number / 10;
    }

    cout << reversdNumber;
}
int main()
{
    ReverseNumber(ReadPositvieNumber("pleas enter positive number"));
}

