#include <iostream>

using namespace std;
int seen[128]={0};
void readWords(string &word1, string &word3)
{
    string word2="";
    cin>>word1>>word2>>word3;
    word1+=word2;
    for(int i=0; i<word1.size(); i++)
    {
        seen[word1[i]]++;
    }
}

bool isContainAllLetters(string word1, string word3)
{
    if(word1.size()!= word3.size())
        return false;

    for(int i=0; i<word3.size(); i++)
    {
        if(seen[word3[i]]==0){
            return false;
        }
        seen[word3[i]]--;

    }
    return true;
}


void print(bool isMatch)
{
    if(isMatch)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    string word1, word3;
    readWords(word1,word3);
    print(isContainAllLetters(word1,word3));
    return 0;
}
