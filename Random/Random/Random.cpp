

#include <iostream>
#include<string>
#include <cstdlib>   
#include <ctime> 
using namespace std;

enum enCharType {SmallL=1, CpitalL=2, SpecialC=3, Digit=4};


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case SmallL:
        return char(RandomNumber(97, 122));
        break;
    case CpitalL:
        return char(RandomNumber(65, 90));
        break;
    case SpecialC:
        return char(RandomNumber(33, 47));
        break;
    case Digit:
        return char(RandomNumber(48, 57));
        break;
    }
    return '\0';
}

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallL) << endl;     
    cout << GetRandomCharacter(enCharType::CpitalL) << endl;     
    cout << GetRandomCharacter(enCharType::SpecialC) << endl;  
    cout << GetRandomCharacter(enCharType::Digit) << endl;
}

