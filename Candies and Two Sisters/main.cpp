#include <iostream>

using namespace std;
void readTestCases(int &testCases)
{
    cin>>testCases;
}

int isContainRemainder(int candies, int distributedWays)
{
    if(candies%2 != 0)
        return distributedWays;
      return distributedWays-1;
}
int distributeWaysOfCandies(int candies)
{
    int distributedWays = candies/2;
    return isContainRemainder(candies,distributedWays);
}


void printWays(int distributeWays)
{
    cout<<distributeWays<<endl;
}

void readNumberOfCandies(int testCases)
{
    int candies=0;
    for(int i=1; i<=testCases; i++)
    {
        cin>>candies;
        printWays(distributeWaysOfCandies(candies));
    }
}

int main()
{
    int testCases=0;
    readTestCases(testCases);
    readNumberOfCandies(testCases);
    return 0;
}
