#include <iostream>

using namespace std;

void readLinesRows(int &lines, int &rows)
{
    cin>>lines>>rows;
}

void drawSnack(int lines, int rows)
{
    bool isBeginning =false;

    for(int i=1; i<=lines; i++)
    {
        if (i % 2 == 0) {
            if (isBeginning) {
                cout << "#";
                for (int j = 1; j < rows; j++)
                    cout << ".";
            } else {
                for (int j = 1; j < rows; j++)
                    cout << ".";
                cout << "#";
            }
            isBeginning = !isBeginning;
        }
        else
        {
            for(int j=1; j<=rows; j++)
            {
                cout<<"#";
            }

        }
        cout<<endl;
    }
}

int main()
{

    int lines=0, rows=0;
    readLinesRows(lines, rows);
    drawSnack(lines,rows);
    return 0;
}
