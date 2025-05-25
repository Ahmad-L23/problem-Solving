#include <string>
#include <iostream>
using namespace std;

enum enLetterCase { small = 1, capital = 2, all = 3 };
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

char ReadLetter()
{
	char letter = ' ';
	cout << "Enter a Charcter? ";
	cin >> letter;
	return letter;
}
int CoutnCapitalSmallLetters(string S1, char letter, enLetterCase Case)
{
	short counter = 0;
	for (int i = 0; i < S1.size(); i++)
	{
		if (tolower( S1[i]) == tolower(letter) && Case == enLetterCase::all)
			counter++;
		else if((S1[i] == letter && Case == enLetterCase::small))
			counter++;
	}

	return counter;
}
int main()
{
	int capitalLetters = 0, SmallLetters = 0;
	string S1 = ReadString();
	char letter = ReadLetter();
	cout << "Letter " << letter << " Count = " << CoutnCapitalSmallLetters(S1, letter, enLetterCase::small) << endl;
	cout << "Letter \'" << letter << "\' Or \'"<< char(toupper(letter)) <<"\' Count = "<< CoutnCapitalSmallLetters(S1, letter, enLetterCase::all) << endl;
	


	system("pause>0");
}