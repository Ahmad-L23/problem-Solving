#include <iostream>

using namespace std;

int readNumber(){
  int num;
  cout<<"Enter Your Number Pleas: ";
  cin>>num;
  return num;
}

string ReverseANumber(int number){
     string con= to_string(number);
     string rev="";
     for(int i=con.size()-1;i>=0;i--)
     {
        rev+=con[i];
     }
     return rev;
}

void printResult(string num){
    cout<<"the reversed is: "<<num;
}

int main()
{
    printResult(ReverseANumber(readNumber()));
    return 0;
}
