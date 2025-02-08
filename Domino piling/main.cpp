#include <iostream>

using namespace std;

void readBoardSizesInSquares(int &m, int &n)
{
    cin>>m>>n;
}

void maximumNumberOfDominoes(int m, int n)
{
    cout<<m * n / 2;
}

int main()
{
    int m=0, n=0;
    readBoardSizesInSquares(m, n);
    maximumNumberOfDominoes(m, n);
    return 0;
}
