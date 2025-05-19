#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

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

			arr[i][j] = RandomNumber(0, 10);

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


bool IsNumberExistInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols)
{
	bool isExist = false;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				return true;
			};
		}
	}
	return false;
}


bool IsNumberExist(int arr[3][3], int number, int Rows, int Columns)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Columns; j++)
		{
			if (arr[i][j] == number)
				return true;
		}
	}
	return false;
}

void PrintIntersectionNumbersInMatrices(int arr1[3][3], int arr2[3][3], int Rows, int Colmuns)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Colmuns; j++)
		{
			if(IsNumberExist(arr2, arr1[i][j], Rows,Colmuns))
				cout<<arr1[i][j]<<" ";
		}
	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3], arr2[3][3];
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Original Matrix1: " << endl;
	PrintMatrix(arr1, 3, 3);
	
	FillMatrixWithRandomNumbers(arr2, 3, 3);
	cout << "\n\nOriginal Matrix2: " << endl;
	PrintMatrix(arr2, 3, 3);


	cout << "Intersected Numbers Are: " << endl;
	PrintIntersectionNumbersInMatrices(arr1, arr2, 3, 3);

	

}