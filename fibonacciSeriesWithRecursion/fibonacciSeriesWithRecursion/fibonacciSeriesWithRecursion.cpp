
#include <iostream>
using namespace std;


int ReadNumber()
{
    int number = 0;

    cout << "Enter a number : ";
    cin >> number;
    return number;
}


int PrintFibonacciSeriesWithRecursion(int prev1, int prev2, int number)
{
    
    if (number <= 0)
        return 1;

    cout << prev1 + prev2 << " ";
    int temp = prev1;
    prev1 = prev2;
    prev2 += temp;
    return  PrintFibonacciSeriesWithRecursion(prev1  , prev2, number-1);

}

int main()
{
    PrintFibonacciSeriesWithRecursion(1, 1, ReadNumber());
}

