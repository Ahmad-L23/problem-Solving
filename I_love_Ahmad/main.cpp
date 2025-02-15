#include <iostream>
using namespace std;

void readInput(int &n, int points[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }
}

int countAmazingPerformances(int n, int points[]) {
    if (n == 1) return 0;

    int best = points[0], worst = points[0], amazingCount = 0;

    for (int i = 1; i < n; i++) {
        if (points[i] > best) {
            amazingCount++;
            best = points[i];
        }
        else if (points[i] < worst) {
            amazingCount++;
            worst = points[i];
        }
    }

    return amazingCount;
}

void printOutput(int result) {
    cout << result << endl;
}

int main() {
    int n, points[1000];

    readInput(n, points);
    int result = countAmazingPerformances(n, points);
    printOutput(result);

    return 0;
}
