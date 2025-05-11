
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

void FillArrayWithRandomNumbers(int arr[], int& arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void sumOfTowArrays(int arr1[], int arr2[], int arrSum[], int arrLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
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

    int arr1[100], arrLength;

    arrLength = ReadPositiveNumber("pleas Enter Number Of Elements: ");

    FillArrayWithRandomNumbers(arr1, arrLength);

    cout << "\nArray 1 Elements: " << endl;
    PrintArrayElements(arr1, arrLength);
    

    int arr2[100];
    FillArrayWithRandomNumbers(arr2, arrLength);

    cout << "\n\nArray 2 Elements: " << endl;
    PrintArrayElements(arr2, arrLength);

    int arrSum[100];
    sumOfTowArrays(arr1, arr2, arrSum, arrLength);

    cout << "\n\nSum Of Array1 and Array2 Elements:" << endl;
    PrintArrayElements(arrSum, arrLength);
    

    


}
