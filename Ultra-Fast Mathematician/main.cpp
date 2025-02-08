#include <iostream>
#include<string>
#include <sstream>
using namespace std;

void readNums(string &num1, string &num2)
{
    cin>> num1>>num2;
}

string correspondingAnswer(string num1, string num2)
{
    //the rule is:
    /*
    The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ.
     In the other case the i-th digit of the answer is 0
    */
    int Size=num1.size();
    stringstream  answer;
    for(int i=0; i<Size; i++)
    {
        if(num1[i] != num2[i])
            answer<<'1';
        else
            answer<<'0';
    }
    return answer.str();
}

void printAnswer(string answer)
{
    cout<<answer;
}
int main()
{
    string num1, num2;
    readNums(num1, num2);
    printAnswer(correspondingAnswer(num1, num2));
    return 0;
}
