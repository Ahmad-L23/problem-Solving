/*
    brute force solution:

        #include <iostream>
        #include<vector>
        using namespace std;


        bool findDistinctLetters(char letter, vector<char>& occurs)
        {

            for(int i=0; i<occurs.size(); i++)
            {
                if(occurs[i]==letter)
                    return false;
            }
            occurs.push_back(letter);
            return true;
        }


        int numberOfDistinctLetters(string letters)
        {
            int distinct=0;
            if(letters.size()<=2)
                return  0;

            vector<char> occurs(letters.size());
            for(int i=1; i<letters.size(); i+=3)
            {
                if(findDistinctLetters(letters[i], occurs))
                    distinct++;
            }
            return distinct;
        }




        int main()
        {
            cout<<numberOfDistinctLetters("{a, b, c}");

            return 0;
        }


*/

#include <iostream>
#include<set>
using namespace std;

string readLetters()
{
    string lettters="";
    getline(cin, lettters);
    return lettters;
}

set<char> findDistinctLetters(string letters)
{
    if(letters.size()<=2)
        return  set<char>();

    set<char> distinctLetters;
    for(int i=1; i<letters.size(); i+=3)
    {
        distinctLetters.insert(letters[i]);
    }
     return distinctLetters;
}

int numberOfDistinctLetters(set<char> distinctLetters)
{
    return distinctLetters.size();
}

void printnumberOfDistinctLetters(int distinct)
{
    cout<<distinct;
}
int main()
{
    printnumberOfDistinctLetters(numberOfDistinctLetters(findDistinctLetters(readLetters())));
    return 0;
}
