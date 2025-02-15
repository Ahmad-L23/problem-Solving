#include <iostream>

using namespace std;


int readPower()
{
    int pow =0;
    cin>>pow;
    return pow;
}

void print(int power)
{
    if(power>=2)
        cout<<25;
}
int main()
{
    print(readPower());
    return 0;
}
