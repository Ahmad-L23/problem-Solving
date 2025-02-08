#include <iostream>

using namespace std;

int enterNumber(){
    int num;
    cout<<"Enter the number pleas"<<endl;
    cin>>num;
    return num;
}

void checkIsEven(int num){
    if(num%2==0)
      cout<<"it's even";
    else
        cout<<"Not Even";
}
int main()
{
        checkIsEven(enterNumber());

    return 0;
}
