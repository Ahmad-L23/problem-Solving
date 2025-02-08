#include <iostream>

using namespace std;

int enterNumber(){
    int num;
    cout<<"enter the number: ";
     cin>>num;
     return num;
}

string OddOrEven(int num){
    if(num%2==0)
        return "it's Even";
    return "it's Odd";
}

int main()
{
    cout << OddOrEven(enterNumber())<< endl;
    return 0;
}
