#include <iostream>

using namespace std;

void readNumberOf_ProblemsAndMinutes(int &NumberOfProblems, int &minutes) {
    cin >> NumberOfProblems >> minutes;
}

int minutesSolveProblem(const int &difficulty) {
    return 5 * difficulty;
}

bool canSolve(int &contest, const int &problem_time) {
    if (contest >= problem_time)
    {
        contest -= problem_time;
        return true;
    }
    return false;
}

int maximumProblemsSolved(const int &NumberOfProblems, const int &minutes) {
    int contest = 240 - minutes;
    int solvedProblems = 0;

    for (int i = 1; i <= NumberOfProblems; i++)
    {
        int problem_time = minutesSolveProblem(i);
        if (canSolve(contest, problem_time))
            solvedProblems++;
        else
            return solvedProblems;
    }

    return solvedProblems;
}

void printSolvedProblems(int solvedProblems) {
    cout << solvedProblems;
}

int main() {
    int NumberOfProblems = 0, minutes = 0;
    readNumberOf_ProblemsAndMinutes(NumberOfProblems, minutes);
    printSolvedProblems(maximumProblemsSolved(NumberOfProblems, minutes));
    return 0;
}
