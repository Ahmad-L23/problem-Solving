#include <iostream>

using namespace std;

char readChar()
{
    char c;
    cout<<"Enter an charcter to check if vowel or constant\n";
    cin>>c;
    return c;
}

bool checkVowelOrConstant(char c)
{
    bool isVowel=false;
    if (tolower(c)=='a' || tolower(c)=='i' || tolower(c)=='u' || tolower(c)=='o' || tolower(c)=='e')
    {
        isVowel=true;
    }
    return isVowel;
}

void print(bool isVowel)
{
    if(isVowel)
        cout<<"it's a vowel\n";
    else{
        cout<<"it's not a vowel\n";
    }
}
int main()
{

    print(checkVowelOrConstant(readChar()));
    return 0;
}
