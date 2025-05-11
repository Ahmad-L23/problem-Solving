
#include <iostream>
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

enum enPrimeNotPrime{prime=1, notPrime=2};

int ReadpositiveNumber(string message)
{
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int RandonNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillArrayWithRandomNumbers(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandonNumber(1, 100);
    }
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{

    arrLength++;
    // Place the new element at the index corresponding to the new length (using zero-based indexing).
    arr[arrLength - 1] = Number;
}


enPrimeNotPrime CheckPrimeNotPrime(int number)
{
    int M = round(number / 2);

    for (int i = 2; i < M; i++)
    {
        if (number % i == 0)
            return enPrimeNotPrime::notPrime;
    }
    return enPrimeNotPrime::prime;
}

void CopyArrayWithPrimeNumbers(int arrSource[], int arrDestination[], int arrLength, int& arrDestinationLength)
{
    
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrimeNotPrime(arrSource[i]) == enPrimeNotPrime::prime)
        {
            AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
        }
    }
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
    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    arrLength = ReadpositiveNumber("Pleas Enter a number: ");
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 Elements: " << endl;
    printArrayElements(arr, arrLength);

    int arrOddNumbers[100], arrOddLengh = 0;
    CopyArrayWithPrimeNumbers(arr, arrOddNumbers, arrLength, arrOddLengh);

    cout << "\n\nArray 2 Prime Numbers" << endl;
    printArrayElements(arrOddNumbers, arrOddLengh);

}

