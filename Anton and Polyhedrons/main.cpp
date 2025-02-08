/*
    brute force solution:
      int readnumberOfPolyhedrons(int &numberOfPolyhedrons)
{
    cin>>numberOfPolyhedrons;
}
string* readPolyhedron(int numberOfPolyhedrons)
{
    string* polyhedrons = new string[numberOfPolyhedrons];
    for(int i=0; i<numberOfPolyhedrons; i++)
    {
        cin>>polyhedrons[i];
    }
    return polyhedrons;
}

int PolyhedronFaces(string Polyhedron)
{
    if(Polyhedron == "Tetrahedron")
        return 4;
    else if(Polyhedron == "Cube")
        return 6;
    else if(Polyhedron == "Octahedron")
        return 8;
    else if(Polyhedron == "Dodecahedron")
        return 12;

    return 20;
}

int totalPolyhedronsFaces(string polyhedrons[], int numberOfPolyhedrons)
{
    int totalFaces=0;
    for(int i=0; i<numberOfPolyhedrons; i++)
    {
        totalFaces+= PolyhedronFaces(polyhedrons[i]);
    }
    return totalFaces;
}

void printTotalFaces(int faces)
{
    cout<<faces;
}

*/


#include <iostream>
#include<unordered_map>
using namespace std;

void readnumberOfPolyhedrons(int &numberOfPolyhedrons)
{
    cin>>numberOfPolyhedrons;
}
string readPolyhedron()
{
    string polyhedrons="";
    cin>>polyhedrons;
    return polyhedrons;
}

unordered_map<string,int> fillFaces()
{
   unordered_map<string, int> faces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}
    };
    return faces;
}

int totalPolyhedronsFaces(unordered_map<string,int>faces, int numberOfPolyhedrons)
{
    int totalFaces=0;
    for(int i=0; i<numberOfPolyhedrons; i++)
    {

        totalFaces+= faces[readPolyhedron()];
    }
    return totalFaces;
}

void printTotalFaces(int faces)
{
    cout<<faces;
}

int main()
{
    int numberOfPolyhedrons=0;
    readnumberOfPolyhedrons(numberOfPolyhedrons);
    unordered_map<string,int> faces = fillFaces();
    printTotalFaces(totalPolyhedronsFaces(faces,numberOfPolyhedrons));
    return 0;
}
