#include <iostream>
#include <vector>
using namespace std;

vector<string> readInputs(int &testCases)
{
    cin >> testCases;
    vector<string> Words(testCases);
    for(auto &word : Words)
        cin >> word;
    return Words;
}

void lowerCase(string &word)
{
    for(int i = 0; i < word.size(); i++)
    {
        if(word[i] <= 'Z')
        {
            word[i] += 32;
        }
    }
}

void checkYesWords(vector<string>& words)
{
   for(auto &word : words)
   {
     lowerCase(word);
     if(word != "yes")
        word = "no";
   }
}

void print(const vector<string>& words)
{
    for(const auto &word : words)
        cout << word << endl;
}

int main()
{
    int testCases = 0;
    vector<string> words = readInputs(testCases);
    checkYesWords(words);
    print(words);
}
