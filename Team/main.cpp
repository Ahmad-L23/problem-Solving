#include <iostream>

using namespace std;

bool checkNumberOfSolutions(int p, int v, int t);

int readInputes(int &p, int &v, int &t)
{
    int cnt=0, NOP;
    cin>>NOP;
    for(int i=0; i<NOP; i++)
    {
        cin>>p>>v>>t;
        if(checkNumberOfSolutions(p,v,t))
            cnt++;
    }
    return cnt;
}

bool checkNumberOfSolutions(int p, int v, int t)
{
    if(p+v+t>=2)
        return true;
    return false;
}
void print(int cnt)
{
    cout<<cnt;
}
int main()
{
    int p,v,t;
    print(readInputes(p,v,t));

    return 0;
}
