#include <iostream>
#include<vector>
using namespace std;

void readNums(int &dividend, int &divisor)
{
      cin>>dividend >>divisor;
}

int notDivisable(int divisor, int remain)
{
    return divisor - remain;
}
vector<int> minimumNumberOfMoves(int testCases)
{
    vector<int>CasesMinimumMoves;
    int dividend=0, divisor=0, remain=0;
    while(testCases--)
    {
        readNums(dividend,divisor);
        remain = dividend%divisor;
        remain==0 ? CasesMinimumMoves.push_back(0):CasesMinimumMoves.push_back(notDivisable(divisor, remain));
    }
    return CasesMinimumMoves;
}

void printMoveForEachCase(vector<int> Moves)
{
    for(auto Move : Moves)
        cout<<Move<<endl;
}

int main()
{
    int testCases=0;
    cin>>testCases;
    printMoveForEachCase(minimumNumberOfMoves(testCases));
    return 0;
}
