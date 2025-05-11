

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


void PrintInvertedPattren(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
            cout << i;

        cout << endl;
    }
}

int main()
{
    PrintInvertedPattren(ReadPositvieNumber("enter a positive number"));
}
