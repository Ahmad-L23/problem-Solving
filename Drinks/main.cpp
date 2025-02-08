#include <iostream>
#include<vector>
#include <iomanip>
using namespace std;

void readOrangeAmount(vector<int>& orangeAmount, int &numberOfDrinks)
{
    int Amount=0;
    cin>>numberOfDrinks;
    for(int i=0; i<numberOfDrinks; i++)
    {
        cin>>Amount;
        orangeAmount.push_back(Amount);
    }
}

int TotalOrangeAmount(vector<int>drinks)
{
    int sum=0;
    for(auto drink: drinks)
        sum+=drink;
    return sum;
}
double calculateOrangePrecntage(vector<int>orangeAmount, int numberOfDrinks)
{
    int TotalAmount=TotalOrangeAmount(orangeAmount);
    return TotalAmount/(numberOfDrinks+0.0);
}

void printAmount(double totalAmount)
{
    cout<<fixed<<setprecision(12)<<totalAmount;
}
int main()
{
    int numberOfDrinks=0;
    vector<int>orangeAmount;
    readOrangeAmount(orangeAmount, numberOfDrinks);
    printAmount(calculateOrangePrecntage(orangeAmount, numberOfDrinks));
    return 0;
}
