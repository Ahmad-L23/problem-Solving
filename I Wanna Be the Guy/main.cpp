#include <iostream>
#include<set>
using namespace std;

enum enIspass{YES, NO};

void readPassedLevelesForEachGamer(int passedLeveles, set<int>& UniqueLeveles)
{
    int levele = 0;
    for(int i=0; i<passedLeveles; i++)
    {
        cin>>levele;
        UniqueLeveles.insert(levele);
    }
}
void readLevels(set<int>& UniqueLeveles, int &NumberOfleveles)
{
    cin>>NumberOfleveles;
    int gamer1=0;
    int gamer2=0;
    cin>>gamer1;
    readPassedLevelesForEachGamer(gamer1,UniqueLeveles);
    cin>>gamer2;
    readPassedLevelesForEachGamer(gamer2,UniqueLeveles);
}

enIspass isPass(set<int> UniqueLeveles, int NumberOfleveles)
{
    return UniqueLeveles.size()== NumberOfleveles? enIspass::YES : enIspass::NO;
}

void printResult(enIspass result)
{
    if(result == enIspass::YES)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}
int main()
{
    set<int>UniqueLeveles;
    int NumberOfleveles=0;
    readLevels(UniqueLeveles, NumberOfleveles);
    printResult(isPass(UniqueLeveles, NumberOfleveles));

    return 0;
}
