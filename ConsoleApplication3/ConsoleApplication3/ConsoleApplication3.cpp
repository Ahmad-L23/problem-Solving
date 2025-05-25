
#include <iostream>
using namespace std;


int ReadNumber()
{
    int number = 0;

    cout << "Enter a number : ";
    cin >> number;
    return number;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp + a;
}
void PrintTillnumberFibonacciSeries(int number)
{
    int prev1 = 0, prev2 = 1;
    cout << prev1 << " " << prev2 << " ";
    for (int i = 0; i < number; i++)
    {
        cout << prev1 + prev2 << " ";
        Swap(prev1, prev2);
    }
}

int main()
{
    PrintTillnumberFibonacciSeries(ReadNumber());
}

