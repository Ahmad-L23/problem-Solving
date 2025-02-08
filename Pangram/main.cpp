/*
 brute force solution:
-----------------------------------------------------
bool checkIfOccurs(vector<char> Unique, char alpha)
{
    for(int i=0; i<Unique.size(); i++)
    {
        if(alpha == Unique[i])
            return false;
    }
    return true;
}
enPanagram isPanagram(int numberOfChars, string str)
{
    if(numberOfChars<26)
        return enPanagram::NO;
    toLowerCase(str,numberOfChars);
    vector<char> Unique;
    for(int i=0; i<numberOfChars; i++)
    {
        if(i>0 && checkIfOccurs(Unique, str[i]))
            Unique.push_back(str[i]);
    }
    return Unique.size()>=26? enPanagram::YES : enPanagram::NO;
}

-----------------------------------------------------------------
*/

#include <iostream>
#include<vector>
#include<set>
using namespace std;

enum enPanagram{YES, NO};
void readString(int &numberOfChars, string &str)
{
    cin>>numberOfChars>>str;
}

void toLowerCase(string &str, int length)
{
    for(int i=0; i<length; i++)
    {
        if(str[i]<=90)
            str[i] = str[i]+32;
    }
}

enPanagram isPanagram(int numberOfChars,string str)
{
    if(numberOfChars<26)
        return enPanagram::NO;

    toLowerCase(str,numberOfChars);
    set<char>Unique;
    for(int i=0; i<numberOfChars; i++)
    {
        Unique.insert(str[i]);
    }
    return Unique.size()==26? enPanagram::YES : enPanagram::NO;
}

void printResult(enPanagram isPanagram)
{
    if(isPanagram == enPanagram::YES)
        cout<<"YES";
    else
        cout<<"NO";
}


int main()
{
    int numberOfChars=0; string str="";
    readString(numberOfChars,str);
    printResult(isPanagram(numberOfChars, str));


    return 0;
}
