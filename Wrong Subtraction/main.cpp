#include <iostream>

using namespace std;

int LastDigit(int num)
{
    return num%10;
}
int removeLastDigitIfZero(int number)
{
    return number/10;
}

void Subtraction(int &number, int numberOfSubtractions)
{
    int lastDigit=0;
    while(numberOfSubtractions>0)
    {
        lastDigit=LastDigit(number);
        if(lastDigit>0)
            number-=1;
        else
            number = removeLastDigitIfZero(number);

        numberOfSubtractions--;
    }
}

void print(int number)
{
    cout<<number;
}
int main()
{
    int number=0, numberOfSubtractions=0;
    cin>>number>>numberOfSubtractions;
    Subtraction(number, numberOfSubtractions);
    print(number);
    return 0;
}
