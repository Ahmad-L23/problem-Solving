#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


int* readNumbers(int& Size) {
    cout << "Enter the array size: ";
    cin >> Size;

   
    if (Size <= 0) {
        cout << "Invalid size! Setting size to 1." << endl;
        Size = 1;
    }

    int* numbers = new int[Size];
    for (int i = 0; i < Size; i++) {
        cout << "Enter the element number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    return numbers;
}


vector<int> findDuplicates(int* numbers, int Size) {
    unordered_set<int> seen;       
    unordered_set<int> duplicates; 

    for (int i = 0; i < Size; i++) {
        if (seen.find(numbers[i]) != seen.end()) {
            
            duplicates.insert(numbers[i]);
        } else {
            
            seen.insert(numbers[i]);
        }
    }

    return vector<int>(duplicates.begin(), duplicates.end());
}

void print() {
    int Size = 0;
    int* numbers = readNumbers(Size);

    
    vector<int> duplicates = findDuplicates(numbers, Size);

    cout << "Original numbers: ";
    for (int i = 0; i < Size; i++) {
        cout << numbers[i];
        if (i < Size - 1) {
            cout << ", ";
        }
    }
    cout << endl;


    if (!duplicates.empty()) {
        cout << "Duplicate numbers: ";
        for (size_t i = 0; i < duplicates.size(); i++) {
            cout << duplicates[i];
            if (i < duplicates.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    } else {
        cout << "No duplicate numbers found." << endl;
    }

    delete[] numbers;
}

int main() {
    print();
    return 0;
}
