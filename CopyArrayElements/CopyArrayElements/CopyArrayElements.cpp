
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


void CopyArrayElemnts(int arrSource[], int arrDestenation[], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
    {
       
        arrDestenation[i] = arrSource[i];
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

    int arr[100], arr2[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArrayElements(arr, arrLength);

    CopyArrayElemnts(arr, arr2, arrLength);

    cout << "\nCopy Array1 Elements After Copy: ";
    PrintArrayElements(arr2, arrLength);

  

}
