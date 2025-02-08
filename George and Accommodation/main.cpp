#include <iostream>

using namespace std;

int roomsCanLiveIn(int rooms)
{
    int rommsCanMoveIn=0;
    int peopleLiveIn=0, roomCapcity=0;
    for(int i=0; i<rooms; i++)
    {
        cin>>peopleLiveIn>>roomCapcity;
        if((peopleLiveIn+2)<=roomCapcity)
            rommsCanMoveIn++;
    }
    return rommsCanMoveIn;
}

void print(int rommsCanMoveIn)
{
    cout<<rommsCanMoveIn;
}
int main()
{
    int rooms=0;
    cin>>rooms;
    print(roomsCanLiveIn(rooms));
    return 0;
}
