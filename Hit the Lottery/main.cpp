/*
  brute force solution:
    void dollarDenominations(int &cash)
{
    if(cash>=100)
         cash-=100;

    else if(cash>=20 && cash<100)
        cash-=20;

    else if(cash>=10 && cash<20)
         cash-=10;

    else if(cash>=5 && cash<10)
        cash-=5;

    else{
        cash-=1;
    }
}

int MinimumBills(int cash)
{
    int bills=0;
    while(cash>0)
    {
        dollarDenominations(cash);
        bills++;
    }
    return bills;
}

*/



#include <iostream>

using namespace std;

int readwithdrawCash()
{
    int cash=0;
    cin>>cash;
    return cash;
}

int DenominationWithdrawals(int cash, int dollar)
{
    return cash/dollar;
}

int Remaining(int cash, int Denomination)
{
    return cash%Denomination;
}
int MinimumBills(int cash)
{
    int bills = 0;
    int denominations[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5 && cash > 0; i++)
    {
        bills += DenominationWithdrawals(cash, denominations[i]);
        cash = Remaining(cash, denominations[i]);
    }

    return bills;
}

void printBills(int bills)
{
    cout<<bills;
}
int main()
{
    printBills(MinimumBills(readwithdrawCash()));
    return 0;
}
