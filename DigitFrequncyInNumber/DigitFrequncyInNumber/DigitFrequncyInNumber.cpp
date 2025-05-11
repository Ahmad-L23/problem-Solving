
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


int main()
{
    int Number = ReadPositvieNumber("pleas enter the main number");

    short DigitToCheck= ReadPositvieNumber("pleas enter one digit to check");

    cout << "\nDigit " << DigitToCheck << " Frequency is "
        << CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
    std::cout << "Hello World!\n";
}
