#include <iostream>
using namespace std;

string* readWords(int& numberOfWords)
{
    cin>>numberOfWords;
    string* words = new string[numberOfWords];
    for (int i = 0; i < numberOfWords; i++)
    {
        cin >> words[i];
    }
    return words;
}

void printLength(string* words, int numberOfWords)
{
    for (int i = 0; i < numberOfWords; i++)
    {
        int lenBet = words[i].size() - 2;
        if (words[i].size() > 10)
        {
            cout << words[i][0] + to_string(lenBet) + words[i][words[i].size() - 1] << endl;
        }
        else
        {
            cout << words[i] << endl;
        }
    }
}

int main()
{
    int numberOfWords;
    string* words = readWords(numberOfWords);
    printLength(words, numberOfWords);
    delete[] words;
    return 0;
}
