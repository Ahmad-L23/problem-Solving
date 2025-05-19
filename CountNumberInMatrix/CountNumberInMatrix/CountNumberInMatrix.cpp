#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int ReadNumber()
{
	int number = 0;
	cout << "Enter a number To Count : ";
	cin>> number;

	return number;
}


int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	int OrderdNumber = 1;

	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{

			arr[i][j] = RandomNumber(1, 10);

		}
	}
}




void PrintMatrix(int arr[3][3], int Rows, int Column)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Column; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int CountNumberInMatrix(int arr[3][3], int Rows, int Columns, int Number)
{
	int counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (arr[i][j] == Number)
				counter++ ;
		
		}
	}
	return counter;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3];
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Original Matrix1: " << endl;
	PrintMatrix(arr1, 3, 3);

	int number = ReadNumber();

	cout<<"number " << number<<" Count in matrix is " << CountNumberInMatrix(arr1, 3, 3, number);

}