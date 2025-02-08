#include <iostream>

using namespace std;

enum enisLucky { YES, NO };

long long readNumber()
{
    long long number;
    cin >> number;
    return number;
}

int countLuckyDigits(long long number)
{
    int count = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        if (lastDigit == 4 || lastDigit == 7)
            count++;
        number /= 10;
    }
    return count;
}

enisLucky isLuckyNumber(int number)
{
    if (number == 0) return enisLucky::NO;

    while (number > 0)
    {
        int digit = number % 10;
        if (digit != 4 && digit != 7)
            return enisLucky::NO;
        number /= 10;
    }
    return enisLucky::YES;
}

void print(enisLucky isLucky)
{
    if (isLucky == enisLucky::YES)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    long long n = readNumber();
    int luckyDigitCount = countLuckyDigits(n);

    print(isLuckyNumber(luckyDigitCount));

    return 0;
}
