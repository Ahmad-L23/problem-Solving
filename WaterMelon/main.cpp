#include <iostream>

using namespace std;

int readWeight()
{
    int weight=0;
    cin>>weight;
    return weight;
}

bool checkEven(int weight)
{
    if(weight%2==0)
        return true;
    return false;
}

void print(bool isEven)
{
    if(isEven)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    print(checkEven(readWeight()));
    return 0;
}
