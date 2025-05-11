
#include <iostream>
using namespace std;

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void FillArrayElements(int arr[])
{
    arr[0] = 20;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 20;
}


bool isArrayPalindrome(int arr[], int arrLength)
{
    int lastElement = arrLength - 1;
    for (int i = 0; i < arrLength/2; i++)
    {
        if (arr[i] != arr[lastElement--])
            return false;
    }
    return true;
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

    int arr[6];
    FillArrayElements(arr);

    cout << "Array Elements" << endl;
    printArrayElements(arr, 6);
    
    if (isArrayPalindrome(arr, 6))
    {
        cout << "\nYes Array is palindrom" << endl;
    }
}

