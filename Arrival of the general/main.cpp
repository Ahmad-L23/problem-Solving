#include <iostream>
#include<vector>
using namespace std;


void readHeights(vector<int>& heights, int &soldiersInline)
{
    cin>>soldiersInline;
    heights.resize(soldiersInline);
    for(int i=0; i<soldiersInline; i++)
    {
        cin>>heights[i];
    }

}

void findMaximumAndMinimumHieghtPosition(vector<int>heights, int soldiersInline, int& MaximumHeigth, int& minimumHeight)
{
    for(int i=0; i<soldiersInline; i++)
    {
        if(heights[i]>heights[MaximumHeigth])
            MaximumHeigth=i;
        if(heights[i]<=heights[minimumHeight])
            minimumHeight=i;
    }
}
int minimumSecondsToOrder(vector<int>heights, int soldiersInline)
{
    /*first soldier in the line has the maximum height and the last soldier has the minimum height.
      other solders are positioned does not matter
    */
    int MaximumHeigth=0, minimumHeight= 0;
    findMaximumAndMinimumHieghtPosition(heights, soldiersInline,MaximumHeigth,minimumHeight);
    int result= MaximumHeigth + (soldiersInline - minimumHeight-1);//3
    if(MaximumHeigth>minimumHeight)
        result--;
    return  result;
}

void printResult(int result)
{
        cout<<result;
}
int main()
{
    vector<int>heights;
    int soldiersInline=0;
    readHeights(heights, soldiersInline);
    printResult(minimumSecondsToOrder(heights, soldiersInline));

    return 0;
}
