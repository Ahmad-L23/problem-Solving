#include <iostream>
#include<set>
using namespace std;

int readYear()
{
    int year=0;
    cin>>year;
    return year;
}


bool hasDistinctDigits(int year) {
    set<int> digits;
    while (year > 0) {
        int digit = year % 10;
        if (digits.count(digit)) {
            return false;
        }
        digits.insert(digit);
        year /= 10;
    }
    return true;
}

int nextDistinctYear(int year)
{
    while(true)
    {
        year+=1;
        if(hasDistinctDigits(year))
            return year;
    }
    return year;
}

void print(int distinctYear)
{
    cout<<distinctYear;
}
int main()
{
    print(nextDistinctYear(readYear()));
    return 0;
}
