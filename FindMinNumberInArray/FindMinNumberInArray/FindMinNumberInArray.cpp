
#include <iostream>
using namespace std;


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[], int& arrLength)
{
    cout << "How many Elements You want in Array?" << endl;
    cin >> arrLength;

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


int FindMinNumInArray(int arr[], int arrLength)
{
    int MinNumber = arr[0];
    for (int i = 1; i < arrLength; i++)
    {
        if (arr[i] < MinNumber)
            MinNumber = arr[i];
    }
    return MinNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArrayElements(arr, arrLength);

    cout << "\Min Number is: ";
    cout << FindMinNumInArray(arr, arrLength);

}
