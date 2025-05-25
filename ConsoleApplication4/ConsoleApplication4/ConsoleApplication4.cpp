
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



bool isVowel(char charcter)
{
    charcter = tolower(charcter);
    return ( (charcter == 'a') || (charcter == 'o') || (charcter == 'u') || (charcter == 'e') || (charcter == 'i') );
        
}

void PrintVowels(string Word)
{
    short counter = 0;
    for (int i = 0; i < Word.size(); i++)
    {

        if (isVowel(Word[i]))
            cout << Word[i] << "  ";
    }
}

int main()
{
    cout << "Vowels in String Are : ";
    PrintVowels(ReadString());


}

