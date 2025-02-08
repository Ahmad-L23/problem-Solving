#include <iostream>
using namespace std;

void inputStrings(string& str1, string& str2) {
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
}

void concatenateStrings(const string& str1, const string& str2, string& result) {
    result.clear();
    result.resize(str1.size() + str2.size());
    int k = 0;
    for (int i = 0; i < str1.size(); ++i) {
        result[k++] = str1[i];
    }
    for (int j = 0; j < str2.size(); ++j) {
        result[k++] = str2[j];
    }
}

void printString(const string& str) {
    cout << "Concatenated String: "<< str << endl;
}

int main() {
    string str1, str2, result;
    inputStrings(str1, str2);
    concatenateStrings(str1, str2, result);
    printString(result);
    return 0;
}
