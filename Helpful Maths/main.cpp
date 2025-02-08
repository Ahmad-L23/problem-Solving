#include <iostream>
#include <cmath>
using namespace std;

string readStirngOfDigit()
{
    string digits;
    cin>>digits;
    return digits;
}

void customSort (string &numbers)
{
    for(int i=0; i<numbers.size()-1; i++)
    {
        for(int j=0 ;j<numbers.size()-i-1; j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                char tump = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = tump;
            }
        }
    }
}

string reorderDigits(string digits)
{
    string numbers = "";
    for(auto digit : digits)
    {
        if(digit != '+')
            numbers+= digit;
    }
    customSort(numbers);
    return numbers;
}
void print(string numbers)
{
    string ans = "";
    for(int i=0; i<numbers.size(); i++)
    {
        if(i>0)
            ans+='+';
         ans+=numbers[i];
    }
    cout<<ans;
}
int main()
{
    print(reorderDigits(readStirngOfDigit()));

    return 0;
}
