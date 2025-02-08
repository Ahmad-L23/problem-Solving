#include <iostream>

using namespace std;

int readNum(){
    int num;
    cout<<"Enter the number pleas: ";
    cin>>num;
    return num;
}

string CheckPositiveOrNegative(int num){
    return num>=0?"Positive":"Negative";
}
int main()
{
   cout<<CheckPositiveOrNegative(readNum());
    return 0;
}
