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



int FindMinNumberInMatrix(int arr[3][3], int Rows, int Colms)
{
	int min = arr[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Colms; j++)
		{
			if (arr[i][j] < min)
				min = arr[i][j];
		}
		
	}
	return min;
}


int FindMaxNumberInMatrix(int arr[3][3], int Rows, int Colms)
{
	int Max = arr[0][0];

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Colms; j++)
		{
			if (arr[i][j] > Max)
				Max = arr[i][j];
		}

	}
	return Max;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3];
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Original Matrix1: " << endl;
	PrintMatrix(arr1, 3, 3);

	
	cout << "\nThe Max Number in Matrix is : " << FindMaxNumberInMatrix(arr1, 3, 3)<<endl;
	cout << "\nThe Min Number in Matrix is : " << FindMinNumberInMatrix(arr1, 3, 3)<<endl;



}