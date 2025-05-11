#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

void readTestCases(int &testCases)
{
    cin>>testCases;
}

void readParticipantPosi(vector<int> &participants)
{
    for(auto &partici : participants)
        cin>>partici;
}

vector<int> getparticipantsFrontTimur(int testCases)
{
    vector<int> results;
    while(testCases--)
    {
        vector<int>participants(4);
        int frontTimur=0;

        readParticipantPosi(participants);

        for(int i=1;i<participants.size(); i++)
            if(participants[i]>participants[0])
                frontTimur++;

         results.push_back(frontTimur);
    }
    return results;
}

void printResults(const vector<int>& resultes)
{
    for(auto Res : resultes)
        cout<<Res<<endl;
}
int main()
{
    int testCases=0;
    readTestCases(testCases);
    vector<int>paratci = getparticipantsFrontTimur(testCases);
    printResults(paratci);
    return 0;
}
