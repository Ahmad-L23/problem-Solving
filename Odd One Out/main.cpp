#include <iostream>
using namespace std;

int* valueOccursOnce(int TestCasses)
{
    int a = 0, b = 0, c = 0;
    int* values = new int[TestCasses];

    for (int i = 0; i < TestCasses; i++)
    {
        cin >> a >> b >> c;
        if (a != b && a != c)
            values[i] = a;
        else if (b != c && b != a)
            values[i] = b;
        else
            values[i] = c;
    }

    return values;
}

void printValues(int values[], int Size)
{
    for (int i = 0; i < Size; i++)
        cout << values[i] << endl;
}

int main()
{
    int TestCasses = 0;
    cin >> TestCasses;

    int* values = valueOccursOnce(TestCasses);
    printValues(values, TestCasses);
    delete[] values;

    return 0;
}
