#include <iostream>

using namespace std;


int checkIfValid(int num){
    while(num<0){
        cout<<"pleas Enter a positive number: ";
        cin>>num;
    }
    return num;
}

int readNumber(){
 int num;
 cout<<"Enter a number: ";
 cin>>num;

 return checkIfValid(num);

}


int findFactorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num *findFactorial(num-1);
}

void display(int num){
    cout<<num<<endl;
}
int main()
{
    display(findFactorial(readNumber()));
    return 0;
}


