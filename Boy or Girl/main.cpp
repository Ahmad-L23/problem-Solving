#include <iostream>

using namespace std;

enum enGender{male, female};
enGender checkCanChat(int numberOfDistinctCharacters);

void customSort(string& orderedWord)
{
    for(int i=0; i<orderedWord.size()-1; i++)
    {
        for(int j=0; j<orderedWord.size()-i-1; j++)
        {
            if(orderedWord[j]>orderedWord[j+1])
            {
                char temp = orderedWord[j];
                orderedWord[j] = orderedWord[j+1];
                orderedWord[j+1] = temp;
            }
        }
    }
}


string readWord()
{
    string userName;
    cin>>userName;
    return userName;
}

string numberOfDistinctCharacters(string userName)
{
    customSort(userName);
    int counter=0;
    for(int i=0; i<userName.size(); i++)
    {
        if(userName[i] != userName[i+1])
        {
            counter++;
        }
    }
    if(checkCanChat(counter) == enGender::female)
        return "CHAT WITH HER!";

    return "IGNORE HIM!";
}

enGender checkCanChat(int numberOfDistinctCharacters)
{
    if(numberOfDistinctCharacters%2==0)
        return enGender::female;
    return enGender::male;
}

void print(string result)
{
    cout<<result;
}
int main()
{
    print(numberOfDistinctCharacters(readWord()));
    return 0;
}

//wjmmrzb
