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


short CountNumberInMatrix(int Matrix1[3][3], int Number, short Rows, short Cols)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				NumberCount++;
			};
		}
	}
	return NumberCount;
}


bool isSparceMatrix(int arr[3][3], int Rows, int Columns)
{
	int MatrixSize = Rows * Columns;
	
	return CountNumberInMatrix(arr, 0, Rows, Columns) >= MatrixSize / 2;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3];
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Original Matrix1: " << endl;
	PrintMatrix(arr1, 3, 3);


	if (!isSparceMatrix(arr1, 3, 3))
		cout << "\nit's not a sparce matrix" << endl;
	else
		cout << "\nIt's a sparce Matrix" << endl;

}