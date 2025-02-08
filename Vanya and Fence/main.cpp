#include <iostream>

using namespace std;

int* readHeights(int NumberOfFriedns, int &height)
{
    cin>>height;
    int *friendsHeight = new int[NumberOfFriedns];

    for(int i=0; i<NumberOfFriedns; i++)
    {
        cin>>friendsHeight[i];
    }
    return friendsHeight;
}

int minimumPossibleValidWidth(int friendsHeight[], int NumberOfFriedns, int height)
{
    int minimumWidth=0;
    for(int i=0; i<NumberOfFriedns; i++)
    {
        if(friendsHeight[i]>height)
            minimumWidth+=2;
         else
            minimumWidth+=1;
    }
    return minimumWidth;
}

void printMinimumWidth(int width)
{
    cout<<width;
}
int main()
{
    int NumberOfFriedns,height=0;
    cin>>NumberOfFriedns;
    int* friendsHeight = new int[NumberOfFriedns];
    friendsHeight = readHeights(NumberOfFriedns,height);
    printMinimumWidth(minimumPossibleValidWidth(friendsHeight, NumberOfFriedns, height));
    delete[] friendsHeight;
    return 0;
}
