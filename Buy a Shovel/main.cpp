#include <iostream>

using namespace std;

void readPriceAndDiffrentDenomination(int &price, int &denomination)
{
    cin>>price>>denomination;
}

int getMinimummShovels(const int &price, const int &denomination)
{
    int shovels=1;
    int total = price;
    while(true)
    {
        if( total%10==0 || (total-denomination)%10==0)
            return shovels;
        total+=price;
         shovels++;
    }
    return shovels;
}

void printShovelsNumber(const int &shovels)
{
    cout<<shovels;
}

int main()
{
    int price=0,denomination=0;
    readPriceAndDiffrentDenomination(price, denomination);
    printShovelsNumber(getMinimummShovels(price, denomination));
    return 0;
}
