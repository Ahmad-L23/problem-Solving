
#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int RandomNumber(int From, int To)
{
    int RandomNum = rand() % (To - From + 1) + From;
    return RandomNum;
}

void FillMatrixWithRandomNumbers(int Numbers[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Numbers[i][j] = RandomNumber(1, 100);
        }
    }
}


void PrintMatrixElements(int Numbers[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Numbers[i][j] << "\t";
        }
        cout << endl;
    }
}


int main()
{
    srand((unsigned)time(NULL));

    int Numbers[3][3];

    FillMatrixWithRandomNumbers(Numbers);
    PrintMatrixElements(Numbers);

}


