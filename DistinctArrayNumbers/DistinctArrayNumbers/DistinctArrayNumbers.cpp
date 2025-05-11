
#include <iostream>
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>

enum enPrimeNotPrime { prime = 1, notPrime = 2 };

void FillArrayElements(int arr[])
{
    arr[2] = arr[1] = arr[0] = 10;
    arr[4] = arr[3] = 50;
    arr[8] = arr[7] = arr[6] = arr[5] = 70;
    arr[9] = 90;
}


int FindNumberPosition(int number, int arr[], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        if (arr[i] == number)
            return i;
    }
    return -1;
}

bool isNumberInArray(int number, int arr[], int arrLength)
{
    return FindNumberPosition(number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;             // Increase the array length by 1.
    arr[arrLength - 1] = Number;  // Place the new element at the new last index.
}

void DistinctArrayElements(int Source[], int Destination[], int length, int& DistinctLength)
{
    
    for (int i = 0; i < length; i++)
    {
        if (!isNumberInArray(Source[i], Destination, DistinctLength))
        {
            AddArrayElement(Source[i], Destination, DistinctLength);
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
    
    int arr[10], DisitinctLength = 0;

    FillArrayElements(arr);

    cout << "Array 1 Elements" << endl;
    printArrayElements(arr, 10);

    int arrDisitinct[100];
    DistinctArrayElements(arr, arrDisitinct, 10, DisitinctLength);

    cout << "\n\nDistinct Elements: " << endl;
    printArrayElements(arrDisitinct, DisitinctLength);

}

