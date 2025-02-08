#include <iostream>

using namespace std;

int* readScores(int numberOfContestant)
{
    int* scores = new int[numberOfContestant];
    for (int i = 0; i < numberOfContestant; i++)
        cin >> scores[i];
    return scores;
}

int checkScoreGreaterThanOrEqual(int scores[], int numberOfContestant, int targetScore)
{
    int count = 0;
    for (int i = 0; i < numberOfContestant; i++) {
        if (scores[i] >= scores[targetScore-1] && scores[i]>0)
            count++;
    }
    return count;
}

void print(int numberOfPass)
{
    cout << numberOfPass;
}

int main()
{
    int numberOfContestant = 0, targetScore = 0;
    cin >> numberOfContestant >> targetScore;

    int* scores = readScores(numberOfContestant);
    int numberOfPass = checkScoreGreaterThanOrEqual(scores, numberOfContestant, targetScore);
    print(numberOfPass);

    delete[] scores;
    return 0;
}
