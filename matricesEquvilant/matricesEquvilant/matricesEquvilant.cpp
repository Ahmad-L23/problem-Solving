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




int MatrixSum(int arr[3][3], int Rows, int Column)
{
	int sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Column; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
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

void checkIfMatrixesEquavilant(int arr1Sum, int arr2Sum)
{
	arr1Sum == arr2Sum ? cout << "\nMatrices Are Equal.\n" : cout << "\nMatrices Are Not Equal\n";
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


	checkIfMatrixesEquavilant(MatrixSum(arr1, 3, 3), MatrixSum(arr2, 3, 3));

}