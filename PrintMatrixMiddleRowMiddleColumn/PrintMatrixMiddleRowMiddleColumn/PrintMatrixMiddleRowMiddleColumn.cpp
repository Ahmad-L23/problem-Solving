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
void PrintMiddleRowInMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;
	for (short i = 0; i < Cols; i++)
	{
		cout << arr[MiddleRow][i] << " ";
	}
	cout << "\n";
}

void PrintMiddlecolmunInMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleCols = Cols / 2;
	for (short i = 0; i < Cols; i++)
	{
		cout << arr[i][MiddleCols] << " ";
	}
	cout << "\n";
}

void PrintMatrix(int arr[3][3], int Rows, int Column)
{
	for (short i = 0; i < Rows ; i++)
	{
		for (short j = 0; j < Column; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}


int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3];
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Original Matrix: " << endl;
	PrintMatrix(arr1, 3, 3);

	cout << "Middle Row is : " << endl;
	PrintMiddleRowInMatrix(arr1, 3, 3);
	
	cout << "Middle Column is : " << endl;
	PrintMiddlecolmunInMatrix(arr1, 3, 3);

}