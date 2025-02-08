#include <iostream>
#include<set>
using namespace std;

/*
    In these solutions, I only changed the function that finds the minimum number of horseshoes,
    but the logic of the other functions remains the same.

   brute force solution:
   int minimumNumberOfHorseshoes(int color1,int color2, int color3, int color4)
   {
        int buyCount=0;
        if (s1 == s2 || s1 == s3 || s1 == s4) buyCount++;
        if (s2 == s3 || s2 == s4) buyCount++;
        if (s3 == s4) buyCount++;
        return buyCount;
   }

   another one using two for loops:

   int  minimumNumberOfHorseshoes(int colors[])
   {
        int buyCount=0;
       for(int i=0; i<4; i++)
       {
           for(int j=i+1; i<4; j++)
                if(colors[i] == colors[j])
                   buyCount++;
       }

       return buyCount;
   }
*/


void readColors(set<int>& colors)
{
    int color =0;
    for(int i=0; i<4; i++)
    {
        cin>>color;
        colors.insert(color);
    }
}

int minimumNumberOfHorseshoes(set<int> colors)
{
    return 4 - colors.size();
}

void printMinimumHorseshoes(int BoughtHorseshoes)
{
    cout<<BoughtHorseshoes;
}

int main()
{
    set<int>colors;
    readColors(colors);
    printMinimumHorseshoes(minimumNumberOfHorseshoes(colors));
    return 0;
}
