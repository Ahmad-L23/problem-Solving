
#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int ReadPositiveNumber(string message)
{
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomnumbers(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArrayElements(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}


int FindNumberPosition(int arr[], int arrLength, int number)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == number)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    arrLength = ReadPositiveNumber("Enter Number Of Array Elements: ");
    FillArrayWithRandomnumbers(arr, arrLength);

    cout << "\n\nArray 1 Elements:" << endl;
    PrintArrayElements(arr, arrLength);

    int NumberToSearch = ReadPositiveNumber("\n\nPleas Enter Number To Search For: ");

    cout << "\n\nNumber You Are Looking For is: " << NumberToSearch;

    int position = FindNumberPosition(arr, arrLength, NumberToSearch);
    if (position >= 0)
    {
        cout << "\n\nThe number Found At Position: " << position<<endl;
        cout << "\nthe Number Found its Order: " << position + 1;
    }

    else
    {
        cout << "\n\nThe Number is not found :-("<<endl;
    }
}

