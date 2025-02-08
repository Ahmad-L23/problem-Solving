#include <iostream>

using namespace std;

int NumberOfAttractMagnats(int numberOfMagnats)
{
    string* magnats = new string[numberOfMagnats];
    int groups=1;
    for(int i=0; i<numberOfMagnats; i++)
    {
        cin>>magnats[i];
        if(i>=1 &&(magnats[i]!= magnats[i-1]))
            groups++;
    }
    delete[] magnats;
    return groups;
}

void printNumberOfAttractMagnats(int groups)
{
    cout<<groups;
}

int main()
{
    int numberOfMagnats=0;
    cin>>numberOfMagnats;
    printNumberOfAttractMagnats(NumberOfAttractMagnats(numberOfMagnats));
    return 0;
}
