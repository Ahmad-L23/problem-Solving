#include <iostream>

using namespace std;

int moneyToBorrow(int TotalCost, int dollars);
void readInfo(int &cost, int &dollars, int &bananas)
{
    cin>>cost>>dollars>>bananas;
}

int bananasTotalCost(int cost, int bananas)
{
    int  TotalCost=0;
    for(int i=1; i<=bananas; i++)
    {
        TotalCost+=cost*i;
    }
    return TotalCost;
}

int moneyToBorrow(int TotalCost, int dollars)
{
    return TotalCost>dollars?(TotalCost - dollars):0;
}

void printBorrowedMoney(int borrowedMoney)
{
    cout<<borrowedMoney;
}
int main()
{
    int cost=0,dollars=0,bananas=0;
    readInfo(cost, dollars, bananas);
    int totalCost = bananasTotalCost(cost, bananas);
    printBorrowedMoney(moneyToBorrow(totalCost,dollars));
    return 0;
}
