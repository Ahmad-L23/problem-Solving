#include <iostream>

using namespace std;


void readTheirWeights(int &youngerBear, int &olderBrother)
{
    cin>>youngerBear>>olderBrother;
}

int youngerBrotherBecameHeavier(int &youngerBear, int &olderBrother)
{
    int year=0;
    while(youngerBear<=olderBrother)
    {
        youngerBear*=3;
        olderBrother*=2;
        year++;
    }
    return year;
}

void printTheYear(int year)
{
    cout<<year;
}
int main()
{
    int youngerBear=0,olderBrother=0;
    readTheirWeights(youngerBear,olderBrother);
    printTheYear(youngerBrotherBecameHeavier(youngerBear,olderBrother));
    return 0;
}
