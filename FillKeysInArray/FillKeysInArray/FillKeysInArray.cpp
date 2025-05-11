

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int ReadPositiveNumber(string message)
{
    int num = 0;
    do {
        cout << message << endl;
        cin >> num;
    } while (num <= 0);
    return num;
}


enum enCharType { SmallL = 1, CpitalL = 2, SpecialC = 3, Digit = 4 };


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

string GenerateWord(enCharType Type, short Length)
{
    string Key = "";

    for (int i = 1; i <= Length; i++)
    {
        Key += GetRandomCharacter(Type);
    }
    return Key;
}

string GenerateKey()
{
    string Word = "";
    Word = GenerateWord(enCharType::CpitalL, 4) + '-';
    Word += GenerateWord(enCharType::CpitalL, 4) + '-';
    Word += GenerateWord(enCharType::CpitalL, 4) + '-';
    Word += GenerateWord(enCharType::CpitalL, 4);

    return Word;
}


void FillArrayWithKeys(string arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = GenerateKey();
    }
}


void printArrayElements(string arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i + 1 << "] : " << arr[i] << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    string arr[100];
    int arrLength;
    arrLength = ReadPositiveNumber("Pleas Enter Number Of Array keys");

    FillArrayWithKeys(arr, arrLength);

    printArrayElements(arr, arrLength);

}


