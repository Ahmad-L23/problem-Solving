#include <iostream>

using namespace std;

string readColors()
{
    int numberOfStones;
    cin>>numberOfStones;
    string colors;
    cin>>colors;
    return colors;
}

 int countRemovedStonesToBeDiffrentColors(string colors)
 {
     int diffrentColors=0;
     for(int i=0; i<colors.size(); i++)
     {
         if(colors[i]==colors[i+1])
            diffrentColors++;
     }
     return diffrentColors;
 }

 void print(int diffrentColors)
{
    cout<<diffrentColors;
}


int main()
{
    print(countRemovedStonesToBeDiffrentColors(readColors()));
    return 0;
}
