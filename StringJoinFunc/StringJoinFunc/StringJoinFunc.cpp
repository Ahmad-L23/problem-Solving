// StringJoinFunc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void ReadVectorData(vector<string>& Strings)
{
    char Add = 'Y';
    
    while (Add == 'Y' || Add == 'y')
    {
        string S = "";
        cout << "Enter Any String you Want: ";
        cin.ignore();
        getline(cin, S);       
        Strings.push_back(S);
        cout << "\n Do You Want To Add Another String Y/N? ";
        cin >> Add;
    }
}

string JoinString(vector<string>& Strings, string sperator = " ")
{
    string SJoin = "";

    for (string& S : Strings)
    {
     
        SJoin += S + sperator;
    }

    if(!SJoin.empty())
        SJoin.pop_back();

     return SJoin;
}

string JoinString(string ArrStrings [], short Length, string sperator = " ")
{
    string SJoin = "";

    for (int i = 0; i < Length; i++)
    {
     
        SJoin += ArrStrings[i] + sperator;
    }

    if (!SJoin.empty())
        SJoin.pop_back();


     return SJoin;
}

int main()
{
    vector<string>Strings;
    ReadVectorData(Strings);
    string arrStrings[3] = { "Ahmad", "Sami", "Adnan" };

    cout << "\n\nThe Vector after Join: " << JoinString(Strings, "#") << endl;
    cout << "\n\nThe Vector after Join: " << JoinString(arrStrings, 3, "#") << endl;
}

