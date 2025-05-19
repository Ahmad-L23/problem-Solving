#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int ReadNumber()
{
	int number;
	cout << "Enter a Number To Check If Exist In The Matrix :";
	cin >> number;
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




int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3];
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Original Matrix1: " << endl;
	PrintMatrix(arr1, 3, 3);

	int number = ReadNumber();
	if (IsNumberExistInMatrix(arr1, number, 3, 3))
		cout << "\nyes It's There" << endl;
	else
		cout << "\nNo It's Not There" << endl;

}