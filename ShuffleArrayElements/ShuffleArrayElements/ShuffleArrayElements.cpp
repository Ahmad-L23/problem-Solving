
#include <iostream>
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

void FillArrayFrom1ToNumber(int arr[], int& arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i+1;
    }
}


void Swap(int& A, int& B)
{
    int temp = 0;
    temp = A;
    A = B;
    B = temp;
}

void ShuffleArrayElements(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++ )
    {
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
    }
}


void PrintArrayElements(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
}




int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    arrLength = ReadPositiveNumber("Enter Number Of Elements: ");
    FillArrayFrom1ToNumber(arr, arrLength);

    cout << "\n\nArray Elements Before Shuffle:" << endl;
    PrintArrayElements(arr, arrLength);

    ShuffleArrayElements(arr, arrLength);
    cout << "\n\nArray Elements After Shuffle" << endl;
    PrintArrayElements(arr, arrLength);


}
