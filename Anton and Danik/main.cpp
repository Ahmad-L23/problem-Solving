#include <iostream>

using namespace std;

enum enwinner{Anton, Danik, frienShip};
void readInputs(int &numberOfGames, string &gamesOutcome)
{
    cin>>numberOfGames>>gamesOutcome;
}

enwinner whoWins(int numberOfGames, string gamesOutcome)
{
    int A=0, D=0;
    while(numberOfGames>0)
    {
        if(gamesOutcome[numberOfGames-1] == 'A')
            A++;
        else
            D++;
        numberOfGames--;
    }
    if(A==D)
        return enwinner::frienShip;
    return A>D?enwinner::Anton : enwinner::Danik;
}

void print(enwinner winner)
{
    if(winner == enwinner::Anton)
        cout<<"Anton";
    else if(winner == enwinner::Danik)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
int main()
{
    int numberOfGames=0;
    string gamesOutcome;
    readInputs(numberOfGames, gamesOutcome);
    print(whoWins(numberOfGames, gamesOutcome));
    return 0;
}
