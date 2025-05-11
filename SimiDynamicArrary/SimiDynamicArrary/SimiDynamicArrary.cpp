
#include <iostream>
using namespace std;


int ReadPositiveNumber(string message)
{
    int number;

    do {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}


void FillinArray(int arr[], int arrLength, int number)
{
    
        arr[arrLength] = number;
    
}

void ReadWhileAdd(int arr[], int& arrLength)
{
    int Number, Add;
    do {
        Number = ReadPositiveNumber("Pleas Enter a number: ");
        FillinArray(arr, arrLength, Number);
        arrLength++;
        cout << "Do you Want To Add More Numbers :[0]No, [1]yes? ";
        cin >> Add;
        cout << "\n\n";
    } while ( Add == 1);
}

void printArrayElements(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], arralength = 0;

    ReadWhileAdd(arr, arralength);

    cout << "\n\nArray Length: " << arralength<<endl;

    cout << "\nArray Elements" << endl;
    printArrayElements(arr, arralength);
}

