
#include <iostream>
using namespace std;

string ReadPassword()
{
    string Password = "";
    cout << "Pleas Enter a 3-Letter Password (All capital)" << endl;
    cin >> Password;
    return Password;
}

void GuessPassword(string Password)
{
    int trial = 0;
    string word = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                word += char(i);
                word += char(j);
                word += char(k);
                if (word == Password) {
                    cout << "password is" << Password << endl;
                    cout << "Found After " << trial << " Trial(s)" << endl;
                    return;
                }
                else
                {
                    cout << "Trial [" << trial <<"]" << word << endl;
                }

                trial++;
                word = "";
            }
        }
        cout << "\n____________________________\n";

    }
}

int main()
{
    GuessPassword(ReadPassword());
}
