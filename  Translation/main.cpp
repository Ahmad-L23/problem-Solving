#include <iostream>

using namespace std;

void readTwoWords(string &word1, string &word2)
{
    cin>>word1>>word2;
}

bool isSameSize(string word1, string word2)
{
    return word1.size() == word2.size();
}
bool checkIfEquallyInReaverseS(string word1, string word2)
{
    if(!isSameSize(word1, word2))return false;
    int j = 0;
    for(int i=word2.size()-1; i>=0; i--)
    {
        if(word2[i]!= word1[j])
            return false;
            j++;
    }
    return true;
}

void print(bool isEqual)
{
    if(isEqual)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{
    string word1, word2;
    readTwoWords(word1,word2);
    print(checkIfEquallyInReaverseS(word1,word2));
    return 0;
}
