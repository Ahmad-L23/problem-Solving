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

bool CheckIfMatricesTypical(int arr1[3][3], int arr2[3][3], int Rows, int Columns)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (arr1[i][j] != arr2[i][j])
				return false;
		}
	}
	return true;
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

	if (!CheckIfMatricesTypical(arr1, arr2, 3, 3))
		cout << "no: Matrices Are not Typical" << endl;
	else
		cout << "They Are Equal" << endl;


	

}