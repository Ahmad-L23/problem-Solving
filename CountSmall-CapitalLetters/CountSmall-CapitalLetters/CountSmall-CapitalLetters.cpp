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


void CoutnCapitalSmallLetters(string S1, int& CapitalLetters, int& SmallLetters)
{

	
	for (int i = 0; i < S1.size(); i++)
	{
		if (isupper(S1[i]))
			CapitalLetters++;
		else if (islower(S1[i]))
			SmallLetters++;
	}

}
int main()
{
	int capitalLetters = 0, SmallLetters = 0;
	string S1 = ReadString();
	CoutnCapitalSmallLetters(S1, capitalLetters, SmallLetters);
	cout << "\n\nString Length = "<< S1.size() << endl;
	cout << "Capital Letters Count = "<< capitalLetters << endl;
	cout << "Small Letters Count = "<< SmallLetters << endl;
	

	system("pause>0");
}