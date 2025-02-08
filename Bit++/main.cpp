#include <iostream>

using namespace std;

bool checkOperation(string inp);
int readInputs()
{
    int numberOfStatements =0,cnt=0;
    cin>>numberOfStatements;
    string inp="";
    for(int i=0; i<numberOfStatements;i++)
    {
        cin>>inp;
        cnt+=checkOperation(inp)? 1 : -1;
    }
    return cnt;
}

bool checkOperation(string inp)
{
    if(inp[0]=='+' ||inp[inp.size()-1]=='+')
       return true;
    return false;
}

void print(int cnt)
{
    cout<<cnt;
}
int main()
{
    print(readInputs());
    return 0;
}
