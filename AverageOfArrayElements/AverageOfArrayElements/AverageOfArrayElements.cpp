
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


int SumOfArrayElements(int arr[], int arrLength)
{
    int Sum = 0;
    for (int i = 0; i < arrLength; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

float AverageOfnumberInArray(int arr[], int arrLength)
{
    return float(SumOfArrayElements(arr, arrLength)) / arrLength;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArrayElements(arr, arrLength);

    cout << "\nAverage Of All Numbers is: ";
    cout << AverageOfnumberInArray(arr, arrLength);

}
