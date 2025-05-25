
#include <iostream>
#include<string>
using namespace std;

string ReadString()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    return word;
}




short CountEachWord(string S1)
{
    
    string word = "";
    string delim = " ";
    short pos = 0;
    short counter = 0;
    while((pos = S1.find(delim)) != std::string::npos)
    {
        word = S1.substr(0, pos);
        if (word != "")
            counter++;

        S1.erase(0, pos + delim.length());
    }
   
    if (S1 != "")
        counter++;

    return counter;
}

int main()
{
    cout << "the Number of words in your string is: " << CountEachWord(ReadString());


}

