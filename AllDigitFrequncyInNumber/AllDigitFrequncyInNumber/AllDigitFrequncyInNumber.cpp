
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

int CountDigitFrequency(short DigitToCheck, int number)
{
    int reminder = 0;
    int FreqCount = 0;
    while (number > 0)
    {
        reminder = number % 10;

        if (reminder == DigitToCheck)
            FreqCount++;

        number = number / 10;
    }

    return FreqCount;
}


void printAllDigitsFrequancy(int number)
{
    for (int i = 0; i < 10; i++)
    {
        short DigitFrequancy = 0;
        DigitFrequancy = CountDigitFrequency(i, number);

        if (DigitFrequancy > 0)
        {
            cout << "Digit " << i << " Frequencey is "
                << DigitFrequancy << " Time(s).\n";
        }
    }

}

int main()
{
    printAllDigitsFrequancy(ReadPositvieNumber("Please enter a number?"));
}
