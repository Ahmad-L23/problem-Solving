#include <string>
#include <iostream>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

char Toupper(char lower)
{
	return char(int(lower) - 32);
}
void PrintWord(string S1)
{
	bool isFirstLetter = true;

	for (int i = 0; i< S1.size(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = Toupper(S1[i]);
		}
		isFirstLetter = S1[i] == ' ' ? true : false;
	}
	cout << S1;
}
int main()
{
	PrintWord(ReadString());
	system("pause>0");
}