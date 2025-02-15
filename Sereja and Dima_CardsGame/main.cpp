#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> readCards() {
    int NumberOfCards = 0;
    cin >> NumberOfCards;
    vector<int> cards(NumberOfCards);

    for (auto &card : cards)
        cin >> card;

    return cards;
}

void printResults(int serejaPoints, int dimaPoints) {
    cout << serejaPoints << " " << dimaPoints;
}

void getSerejaAndDima_Points(vector<int> cards) {

    int serejaPoints = 0, dimaPoints = 0;
    int left = 0, right = cards.size() - 1;
    bool serejaTurn = true;
    for (int i = 0; i < cards.size(); i++) {
        if(cards[left]>=cards[right])
        {
            if(serejaTurn){
                serejaPoints+=cards[left];
                serejaTurn = false;
            }
            else{
                dimaPoints+=cards[left];
                serejaTurn = true;
            }
            left++;
        }
        else{
            if(serejaTurn){
                serejaPoints += cards[right];
                serejaTurn = false;
            }
            else{
                dimaPoints += cards[right];
                serejaTurn = true;
            }
            right--;
        }
    }

    printResults(serejaPoints, dimaPoints);
}

int main() {
    getSerejaAndDima_Points(readCards());
    return 0;
}
