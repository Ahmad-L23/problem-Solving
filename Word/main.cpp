#include <iostream>

using namespace std;

enum enCase{lower,upper};

string readWord()
{
    string word;
    cin>>word;
    return word;
}

void toLower(string &word)
{
    for(int i=0; i<word.size(); i++)
    {
        if(word[i]<='Z')
        word[i] = word[i]+32;
    }
}
void toUpper(string &word)
{
    for(int i=0; i<word.size(); i++)
    {
        if(word[i]>='a')
        word[i] = word[i]-32;
    }
}
string upperOrLowerCase(string word)
{
    int lowerCase=0,upperCase=0;
    for(int i=0; i<word.size();i++)
    {
        if(word[i]>='a')
            lowerCase++;
         else
             upperCase++;
    }
    if(lowerCase>=upperCase)
            toLower(word);
    else
        toUpper(word);
    return word;
}

void printWord(string word)
{
    cout<<word;
}
int main()
{
    printWord(upperOrLowerCase(readWord()));
    return 0;
}
