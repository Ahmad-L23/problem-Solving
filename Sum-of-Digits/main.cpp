#include <iostream>

using namespace std;

int readnum(){
    int num;
    cout<<"enter the number pleas: ";
    cin>>num;
    return num;
}

int findSum(int num){
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int main()
{
    cout<< "the sum is: "<<findSum(readnum());
    return 0;
}
