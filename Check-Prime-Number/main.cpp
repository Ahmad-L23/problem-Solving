#include <iostream>

using namespace std;
int check=0;

int readNunmer(){
    int num;
    cout<<"Enter the number to check if it's prime or not: ";
    cin>>num;
    return num;
}

int CheckIsPrime(int num){


    for(int i=2;i<num;i++)
    {
        if(num%i==0)
          check++;
    }
    return num;

}

void Print(int num){
    check==0?cout<<num<<" it's a prime number" : cout<<num<<" it's not a prime number";
    }
int main()
{
    Print(CheckIsPrime(readNunmer()));
    return 0;
}
