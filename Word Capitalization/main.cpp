#include <iostream>

using namespace std;

void readWord(string& word)
{
    cin>>word;
}
string wordAfterCapitalization(string word)
{
    if(word[0]>='a' && word[0]<='z')
        word[0] = word[0] - 32;
     return word;
}
void print(string wordAfterCapitalization)
{
    cout<<wordAfterCapitalization;
}
int main()
{
    string word="";
    readWord(word);
    print(wordAfterCapitalization(word));
    return 0;
}
