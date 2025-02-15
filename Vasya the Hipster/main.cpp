#include <iostream>

using namespace std;

void readRedBlueSocks(int &red, int &blue)
{
    cin>>red>>blue;
}

void printResult(int sameColor, int diffrentColor)
{
    cout<<diffrentColor<<" "<<sameColor;
}
void getMaximumDifferentSameSockes(int &red, int &blue)
{
    int diffrentColor = min(red, blue);
    int Max = max(red, blue);
    int sameColor = (Max - diffrentColor)/2;
    printResult(sameColor, diffrentColor);
}
int main()
{
    int red=0, blue=0;
    readRedBlueSocks(red, blue);
    getMaximumDifferentSameSockes(red, blue);
    return 0;
}
