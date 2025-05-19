
#include <iostream>
#include<cstdlib>
#include<ctime>
#include <windows.h>
using namespace std;

enum enWinner{Player = 1, Computer = 2, Draw =3};
enum enChoices { Rock = 1, Paper = 2, Scissors = 3 };

short ReadHowManyRounds()
{
    int rounds = 0;
    
    do {
        cout << "How Many Rounds 1 to 10 ?" << endl;
        cin >> rounds;
    } while (rounds > 10);

    return rounds;
}

int RandomeNumber(int From, int To)
{
    int randomNum = rand() % (To - From + 1) + From;
    return randomNum;
}


enWinner whoWin(enChoices Player, enChoices Computer, short& PlayerWonTimes, short& computerWonTimes, short& DrawTimes)
{
    //statues when Player Win
    if (Player == enChoices::Rock && Computer == enChoices::Scissors) {
        PlayerWonTimes++;
        return enWinner::Player;
    }
    else if (Player == enChoices::Scissors && Computer == enChoices::Paper) {
        PlayerWonTimes++;
        return enWinner::Player;
    }
    else if (Player == enChoices::Paper && Computer == enChoices::Rock) {
        PlayerWonTimes++;
        return enWinner::Player;        
    }


    //statues when Computer Win
    else if (Player == enChoices::Rock && Computer == enChoices::Paper) {
        computerWonTimes++;
        return enWinner::Computer;
    }
    else if (Player == enChoices::Paper && Computer == enChoices::Scissors) {
        computerWonTimes++;
        return enWinner::Computer;
    }
    else if (Player == enChoices::Scissors && Computer == enChoices::Rock) {
        computerWonTimes++;
        return enWinner::Computer;
    }

    //Draw Status
    DrawTimes++;
    return enWinner::Draw;


}

void Tabs(short tabs)
{
    for (int i = 1; i < tabs; i++)
    {
        cout << "\t";
    }
}

void showFinalResultScreen(short PlayerWonTimes, short ComputerWonTimes, short GameRounds, short DrawTimes)
{
    Tabs(6); cout << "----------------------------------------\n";

    Tabs(7); cout << "  +++ Game Over +++\n" << endl;

    Tabs(6); cout << "------------ [Game Result]--------------\n";

    Tabs(6); cout << "Game Rounds        : " << GameRounds << endl;
    Tabs(6); cout << "Player Won Time    : " << PlayerWonTimes << endl;
    Tabs(6); cout << "Computer Won Times : " << ComputerWonTimes << endl;
    Tabs(6); cout << "Draw Times         : " << DrawTimes << endl;
    Tabs(6); cout << "Final Winner       : ";
    
    if (PlayerWonTimes > ComputerWonTimes)
        cout << "Player";
    else if (ComputerWonTimes > PlayerWonTimes)
        cout << "Computer";
    else
        cout << "No Winner";

}


void ShowRoundResult(enChoices Player, enChoices Computer, short CurrentRound, enWinner winner)
{
    cout << "\n\n____________________Round [" << CurrentRound << "] ____________________";
    
    if (winner == enWinner::Player)
        system("color 2f");
    else if (winner == enWinner::Computer)
        system("color 4F");
    else
        system("color 6F");


    if (Player == enChoices::Paper)
        cout << "\nPlayer Choice  : Paper";
    else if(Player == enChoices::Rock)
        cout << "\nPlayer Choice  : Rock";
    else if(Player == enChoices::Scissors)
        cout << "\nPlayer Choice  : Scissors";

    if (Computer == enChoices::Paper)
        cout << "\nComputer Choice: Paper";
    else if (Computer == enChoices::Rock)
        cout << "\nComputer Choice: Rock";
    else if (Computer == enChoices::Scissors)
        cout << "\nComputer Choice: Scissors";

    cout << "\nRound Winner   : [";
    if (winner == enWinner::Computer)
        cout << "Computer ]";
    else if (winner == enWinner::Player)
        cout << "Player ]";
    else
        cout << "No Winner ]";

    cout << "\n__________________________________________________\n";
}

void RestScreen()
{
    system("cls");
}

bool PlayAgain()
{
    char PlayAgain;
    Tabs(6); cout << "\n\nDo You Want to Play again? Y/N? ";
    cin >> PlayAgain;
    if (PlayAgain == 'Y' || PlayAgain == 'y')
        return true;

    return false;
}


void StartGame()
{
    short Rounds = ReadHowManyRounds();
    short CurrentRound = 1, Playerchoice = 0,  ComputerChoice = 0, PlayerWonTimes = 0, computerWonTimes = 0, DrawTimes = 0;

    while (CurrentRound <= Rounds)
    {
        cout << "\n\n\nRound [" << CurrentRound << "] begins:" << endl;

        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors ?";
        cin >> Playerchoice;
        ComputerChoice = RandomeNumber(1, 3);
        enWinner winner = whoWin(static_cast<enChoices>(Playerchoice), static_cast<enChoices>(ComputerChoice), PlayerWonTimes, computerWonTimes, DrawTimes);
        ShowRoundResult(static_cast<enChoices>(Playerchoice), static_cast<enChoices>(ComputerChoice), CurrentRound, winner);
        CurrentRound++;
    }
    showFinalResultScreen(PlayerWonTimes, computerWonTimes, Rounds, DrawTimes);

    if (PlayAgain()) {
        RestScreen();
        StartGame();
    }
    else
        return;
}



int main()
{
    srand((unsigned)time(NULL));

    StartGame();
}

