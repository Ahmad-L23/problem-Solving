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
void FillMatrixWithorderdNumbers(int arr[3][3], short Rows, short Cols)
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
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int MultiplyTwoMatrices(int arr1number, int arr2Number)
{
	return arr1number * arr2Number;
}

void PrintTwoMatrciesAfterMultiply(int arr[3][3], int arr2[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << MultiplyTwoMatrices(arr[i][j], arr2[i][j]) <<"\t";
		}
		cout << "\n";
	}
}



int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3], arr2[3][3];
	FillMatrixWithorderdNumbers(arr1, 3, 3);
	FillMatrixWithorderdNumbers(arr2, 3, 3);
	cout << "arr [1] Numbers :" << endl;
	PrintMatrix(arr1, 3, 3); 
	cout << "\narr [2] Numbers :" << endl;
	PrintMatrix(arr2, 3, 3); 
	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintTwoMatrciesAfterMultiply(arr1, arr2, 3, 3);

}