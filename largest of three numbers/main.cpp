#include <iostream>

using namespace std;

int readNumbers()
{
    int static cnt=1;
    int num=0;
    cout<<"Enter Number "<<cnt<<"\n";
    cin>>num;
    cnt++;
    return num;
}

int findLargest(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else{
        return c;
    }
}

void print(int largest)
{
    cout<<"the largest value is: "<<largest;
}
int main()
{
    print(findLargest(readNumbers(), readNumbers(), readNumbers()));
    return 0;
}
