
#include <iostream>
using namespace std;

enum enPrimeNotPrime { Prime = 1, notPrime = 2 };

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


enPrimeNotPrime CheckPrimeNumber(int number)
{
    int M = round(number / 2);
    for (int i = 2; i < M; i++)
    {
        if (number % i == 0)
            return enPrimeNotPrime::notPrime;
    }
    return enPrimeNotPrime::Prime;
}



void CopyOnlyPrimaryNumbers(int arrSource[], int arrDestenation[], int arrLength, int& arr2length)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrimeNumber(arrSource[i]) == enPrimeNotPrime::Prime)
        {
            arrDestenation[i] = arrSource[i];
            counter++;
        }
    }
    arr2length = counter;
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

    int arr[100], arr2[100], arrLength, arr2Length;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArrayElements(arr, arrLength);

    CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);

    cout << "\nPrime numbers in Arrya: ";
    PrintArrayElements(arr2, arr2Length);



}
