
#include <iostream>
#include<string>
using namespace std;

string ReadString()
{
    string S1 = "";
    cout << "Enter Your String: ";
    getline(cin, S1);
    return S1;
}


string TrimLeft(string S1)
{
    string TrimLeftS = "";
    for (int i = 0; i < S1.size(); i++)
    {
        if (S1[i] != ' ')
        {
            TrimLeftS = S1.substr(i, S1.size() - 1);
            return TrimLeftS;
        }

    }
    return S1;
    
}



string TrimRight(string S1)
{
    string TrimLeftS = "";
    for (int i = S1.size() - 1 ; i >= 0; i--)
    {
        if (S1[i] != ' ')
        {
            TrimLeftS = S1.substr(0, i);
            return TrimLeftS;
        }

    }
    return S1;

}

string TrimS(string& S1)
{
    string S2 = S1;
    S2 = TrimLeft(S2);
    S2 = TrimRight(S2);
    return S2;
}

int main()
{
    string S1 = ReadString();
    cout << "Left Trime : " << TrimLeft(S1) << endl;
    cout << "Right Trime : " << TrimRight(S1) << endl;

    cout << "Trim : " << TrimS(S1);


    return 0;
}

