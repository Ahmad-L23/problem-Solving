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


void InvertAllStringLetters(string& S1)
{
	

	for (int i = 0; i < S1.size(); i++)
	{
		S1[i] = isupper(S1[i]) ? tolower(S1[i]) : toupper(S1[i]);
	}
	
}
int main()
{
	string S1 = ReadString();
	InvertAllStringLetters(S1);
	cout << "\n\nString After Inverted All Letters Case :" << endl;
	cout << S1 << endl;

	system("pause>0");
}