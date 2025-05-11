
#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{
    int num = 0;
    do {
        cout << message;
        cin >> num;
    } while (num <= 0);
    return num;
}

void ReadArraytElements(int arr[], int& arrLength)
{
    cout << "How many Elements You want in Array?" << endl;
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
        cout << endl;
    }
}


void PrintArrayElements(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i]<<" ";
    }
}

int RepeteadNumber(int arr[], int arrLength, short numberToCheck)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == numberToCheck)
            counter++;
    }
    return counter;
}

int main()
{
    int arr[100];
    int arrLength;
    int numberToCheck;

    ReadArraytElements(arr, arrLength);

    cout << "\nOriginal array: ";
    PrintArrayElements(arr, arrLength);

    numberToCheck = ReadPositiveNumber("\n\nEnter Number You want to Check : ");

    
    
    cout << "\nNumber " << numberToCheck;
    cout << " is repeated ";
    cout << RepeteadNumber(arr, arrLength, numberToCheck) << " time(s)\n";

}
