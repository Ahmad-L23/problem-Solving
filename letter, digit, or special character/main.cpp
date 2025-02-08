#include <iostream>
using namespace std;

enum class CharType {
    Letter,
    Digit,
    SpecialCharacter
};

void readCharacter(char& inputChar) {
    cout << "Enter a character: ";
    cin >> inputChar;
}

CharType determineCharacterType(char inputChar) {
    if (inputChar >= '0' && inputChar <= '9') {
        return CharType::Digit;
    }
    if ((inputChar >= 'a' && inputChar <= 'z') || (inputChar >= 'A' && inputChar <= 'Z')) {
        return CharType::Letter;
    }
    return CharType::SpecialCharacter;
}

void printCharacterType(CharType charType) {
    switch (charType) {
        case CharType::Digit:
            cout << "It's a digit." << endl;
            break;
        case CharType::Letter:
            cout << "It's a letter." << endl;
            break;
        case CharType::SpecialCharacter:
            cout << "It's a special character." << endl;
            break;
    }
}

int main() {
    char inputChar;
    readCharacter(inputChar);
    printCharacterType(determineCharacterType(inputChar));
    return 0;
}
