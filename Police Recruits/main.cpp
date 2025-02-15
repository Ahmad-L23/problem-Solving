#include <iostream>
#include<vector>
using namespace std;

vector<int> readNumberOfEvents()
{

    int Events=0;
    cin>>Events;
    vector<int>crimes_Recruited(Events);
    int crime=0;
    for(int i=0; i<Events; i++)
    {
        cin>>crime;
        crimes_Recruited.push_back(crime);
    }
    return crimes_Recruited;
}


int NUmberOfUntreatedCrimes(vector<int>crimes_Recruited)
{
    int untreatedCrimes=0;
    int RecruitedOfficers=0;
    for(int i=0; i<crimes_Recruited.size(); i++)
    {
        if(crimes_Recruited[i]==-1 && RecruitedOfficers<=0){
            untreatedCrimes++;
        }
        else if((crimes_Recruited[i-1]!=-1 && crimes_Recruited[i]>0) || i>0)
            RecruitedOfficers+=crimes_Recruited[i];

    }
    return untreatedCrimes;
}

void printUntreatedCrimes(int untreatedCrimes)
{
    cout<<untreatedCrimes;
}

int main()
{
    printUntreatedCrimes(NUmberOfUntreatedCrimes(readNumberOfEvents()));
    return 0;
}
