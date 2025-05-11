

#include <iostream>
using namespace std;

void TableHEader()
{
    cout << "\t\t\t\tMultiplication Table From 1 to 10\n\n";
    for (int i = 1; i <= 10; i++)
    {
        cout<< "\t" << i;
    }
    cout << "\n--------------------------------------------------------------------------\n";
}

string colmunSperator(int i)
{
    if (i >= 10)
        return  "  |";
    else
        return "   |";
}

void printMutilPlicationTable()
{
    TableHEader();
    for (int i = 1; i <= 10; i++)
    {
        cout<< i << colmunSperator(i);
        for (int j = 1; j <= 10; j++)
        {
            cout<<"\t" << i * j;
        }
        cout << endl;
    }
}

int main()
{
    printMutilPlicationTable();
}

