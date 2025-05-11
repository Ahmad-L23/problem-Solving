

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
    char letter = 65;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++) {
            cout << letter;
        }
        letter++;
        cout << endl;
    }
}

int main()
{
    PrintInvertedPattren(ReadPositvieNumber("enter a positive number"));
}
