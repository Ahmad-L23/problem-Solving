
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

void FillArrayWithRandom(int arr[], int& arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
  
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[arrLength - 1 - i];
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
    FillArrayWithRandom(arr, arrLength);

    cout << "\n\nArray Elements Before Shuffle:" << endl;
    PrintArrayElements(arr, arrLength);

    int arr2[100];
    CopyArrayInReverseOrder(arr, arr2, arrLength);
    cout << "\n\nArray Elements After Shuffle" << endl;
    PrintArrayElements(arr2, arrLength);


}


