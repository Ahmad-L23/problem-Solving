
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int RandomNumber(int From, int To)
{
    int Randnumber = rand() % (To - From + 1) + From;
    return Randnumber;
}

void FillArrayWithRandomElements(int arr[], int& arrLength)
{
    cout << "Enter Number Of Eleents: ";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(-100, 100);
    }
}


int CountOfPositiveNumbbers(int arr[], int arrLength)
{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] > 0)
        {
            counter++;
        }
    }
    return counter;
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


    int arr[100], arrLength = 0;

    FillArrayWithRandomElements(arr, arrLength);

    cout << "\nArray Elements: ";
    printArrayElements(arr, arrLength);

    cout << "\nPositive numbers count is: " << CountOfPositiveNumbbers(arr, arrLength);

}
