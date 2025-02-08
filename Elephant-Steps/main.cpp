#include <iostream>

using namespace std;

int readfriendHouseCoordinate()
{
    int coordinate =0;
    cin>>coordinate;
    return coordinate;
}

int minimumStepsGetFriendHouse(int coordinate)
{
    return  (coordinate + 4) / 5;
}

void print(int steps)
{
    cout<<steps;
}
int main()
{

    print(minimumStepsGetFriendHouse(readfriendHouseCoordinate()));
    return 0;
}
