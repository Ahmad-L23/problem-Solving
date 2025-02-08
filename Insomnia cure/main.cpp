#include <iostream>

using namespace std;

void readMultiplesDamagedDragons(int &punched, int &tailShut, int &sharpHeels, int &callHerMom, int &numberOfDragons)
{
    cin>>punched;
    cin>>tailShut;
    cin>>sharpHeels;
    cin>>callHerMom;
    cin>>numberOfDragons;
}

bool isMultiples(int multiplie, int dragonOrder)
{
    if(dragonOrder%multiplie==0)
        return true;
    return false;
}

bool isDamged(int punched, int tailShut, int sharpHeels, int callHerMom, int dragonOrder)
{
    if(isMultiples(punched,dragonOrder)|| isMultiples(tailShut,dragonOrder) || isMultiples(sharpHeels,dragonOrder) || isMultiples(callHerMom,dragonOrder))
       return true;
     return false;
}
int damagedDragons(int punched, int tailShut, int sharpHeels, int callHerMom, int numberOfDragons)
{
    int damaged=0;
     for(int i=1; i<=numberOfDragons; i++)
     {
         if(isDamged(punched,tailShut,sharpHeels,callHerMom,i))
            damaged++;
     }
     return damaged;
}


void printNumverOFDamagedDragons(int Count)
{
    cout<<Count;
}

int main()
{
    int punched=0, tailShut=0, sharpHeels=0, callHerMom=0, numberOfDragons=0;

    readMultiplesDamagedDragons(punched,tailShut,sharpHeels,callHerMom,numberOfDragons);
    printNumverOFDamagedDragons(damagedDragons(punched,tailShut,sharpHeels,callHerMom,numberOfDragons));
    return 0;
}
