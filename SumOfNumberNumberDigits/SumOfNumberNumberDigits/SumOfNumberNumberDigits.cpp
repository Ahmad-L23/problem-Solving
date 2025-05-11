

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
    int reminder = 0;
    int sum = 0;
    while (number > 0)
    {
        reminder = number % 10;
        sum += reminder;
        number = number / 10;
    }

    return sum;
}

void PrintsumOfNumberDigits(int result)
{
    cout << "the sum of number Digits is: " << result;
}




int main()
{
    PrintsumOfNumberDigits(ReverseNumber(ReadPositvieNumber("pleas enter positiver number")));
}
