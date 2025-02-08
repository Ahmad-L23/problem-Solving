#include <iostream>

using namespace std;

string readInput(){
 string Palindrome;
 cout<<"Enter to check if it's palindrome"<<endl;
 cin>>Palindrome;
 return Palindrome;
}

string ReverseString(string r){
   string reversed;
   for(int i=r.size()-1;i>=0;i--)
   {
       reversed+=r[i];
   }
   return reversed;
}


bool checkIfPalindrom(string P){
    string reversed = ReverseString(P);
    return reversed==P;
}



void print(bool ispalindrom){
 if(ispalindrom){
    cout<<"it\' s palindrome";
 }
 else{
    cout<<"it\' s Not Palindrome";
 }

}
int main()
{
    print(checkIfPalindrom(readInput()));
    return 0;
}
