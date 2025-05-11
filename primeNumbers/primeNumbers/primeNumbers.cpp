

#include <iostream>
using namespace std;

enum enPrimeNotPrime{prime=1, notPrime =2};

int ReadPositiveNumber(string message)
{
    int number = 0;
    do 
    {
        
        cout << message << endl;
        cin >> number;

    } while (number <= 0);
    return number;
}

enPrimeNotPrime CheckPrime(int number)
{
    int m = round(number / 2);

    for (int i = 2; i <= m; i++)
    {
        if (number % i == 0)
            return enPrimeNotPrime::notPrime;

    }
    return enPrimeNotPrime::prime;
}

void PrintPrimeNumbersForm1ToN(int number)
{
    cout << "\n";

    cout << "Prime Numbers from " << 1 << " To " << number;
    cout << " are : " << endl;

    for (int i = 1; i <= number; i++)
    {
        if (CheckPrime(i) == enPrimeNotPrime::prime)
        {
            cout << i<<endl;
        }
    }
}

int main()
{
    PrintPrimeNumbersForm1ToN(ReadPositiveNumber("pleas Enter Positvie Number:"));
}


