#include <iostream>
#include<cmath>
using namespace std;

double readNumbers()
{
    double radius=0.0;
    cout<<"Enter the radius\n";
    cin>>radius;
    return radius;
}

double calculateCircleArea(double radius)
{
    return M_PI* radius* radius;
}


void printArea(double area)
{
    cout<<"The circle area is: "<<area;
}
int main()
{
    printArea(calculateCircleArea(readNumbers()));
    return 0;
}
