#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to read numbers into a dynamically allocated array
int* readNumbers(int& Size) {
    cout << "Enter the array size: ";
    cin >> Size;

    // Validate size
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

// Function to find duplicates in an array
vector<int> findDuplicates(int* numbers, int Size) {
    unordered_set<int> seen;       // Set to track seen numbers
    unordered_set<int> duplicates; // Set to store duplicates

    for (int i = 0; i < Size; i++) {
        if (seen.find(numbers[i]) != seen.end()) {
            // If the number has been seen before, it's a duplicate
            duplicates.insert(numbers[i]);
        } else {
            // Otherwise, add it to the seen set
            seen.insert(numbers[i]);
        }
    }

    return vector<int>(duplicates.begin(), duplicates.end());
}

void print() {
    int Size = 0;
    int* numbers = readNumbers(Size);

    // Find duplicates
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
