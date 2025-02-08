#include <iostream>
using namespace std;

enum enProblemType{Easy,Hard};
int* readInfo(int askedPeople)
{
    int *opinions = new int[askedPeople];
    for(int i=0; i<askedPeople; i++)
    {
        cin>>opinions[i];
    }
    return opinions;
}

enProblemType isProblemEasyOrHard(int opinions[], int askedPeople)
{
    int hard=0;
    for(int i=0; i<askedPeople; i++)
    {
        hard+=opinions[i];
        if(opinions[i]>0)
            return enProblemType::Hard;
    }
    return enProblemType::Easy;
}

void printProblemType(enProblemType type)
{
    if(type== enProblemType::Easy)
        cout<<"EASY";
    else
        cout<<"HARD";
}
int main()
{
    int askedPeople=0;
    cin>>askedPeople;
    int *opinions = new int[askedPeople];
    opinions = readInfo(askedPeople);
    printProblemType(isProblemEasyOrHard(opinions,askedPeople));
    delete[] opinions;
    return 0;
}
