#include <iostream>
#include <string>
#include <sstream>

using namespace std;

enum enFeeling { love, hate };

int readLayersOfLoveHate() {
    int layers = 0;
    cin >> layers;
    return layers;
}

enFeeling howFeel(int num) {
    return (num % 2 != 0) ? enFeeling::hate : enFeeling::love;
}

string Dr_BannerFeeling(int layers) {

    stringstream feeling;
    for (int i = 1; i <= layers; i++) {
        enFeeling Type = howFeel(i);

        if (Type == enFeeling::hate)
            feeling << "I hate ";
        else
            feeling << "I love ";

        if (i != layers)
            feeling << "that ";
    }

    feeling << "it";
    return feeling.str();
}

void printHisFeelings(string feeling) {
    cout << feeling;
}

int main() {
    printHisFeelings(Dr_BannerFeeling(readLayersOfLoveHate()));
    return 0;
}
