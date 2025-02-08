#include <iostream>
using namespace std;

enum enCompiron{firstLessThan, secondLessThan, equals};

void toLower(string& toLower)
{
    for(int i=0;i<toLower.size();i++)
    {
        if(toLower[i]>='A' && toLower[i]<='Z')
            toLower[i] += + 32;
    }
}
void readStringsWithSameLangth(string& alphabeticalOrder1, string& alphabeticalOrder2)
{
    cin>>alphabeticalOrder1>>alphabeticalOrder2;
    toLower(alphabeticalOrder1);
    toLower(alphabeticalOrder2);
}

enCompiron compareStrings(string alphabeticalOrder1, string alphabeticalOrder2)
{
    for(int i=0; i<alphabeticalOrder1.size(); i++){
    if(alphabeticalOrder1[i] > alphabeticalOrder2[i])
        return enCompiron::secondLessThan;
    else if(alphabeticalOrder1[i]<alphabeticalOrder2[i])
         return enCompiron::firstLessThan;
    }

         return enCompiron::equals;
}

void print(enCompiron result)
{
    if(result == enCompiron::firstLessThan)
        cout<<-1;
    else if(result == enCompiron::secondLessThan)
        cout<<1;
    else
        cout<<0;
}

int main()
{
    string s1,s2;
    readStringsWithSameLangth(s1,s2);
    print(compareStrings(s1,s2));
    return 0;
}
