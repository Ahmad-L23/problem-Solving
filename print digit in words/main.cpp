#include <iostream>

using namespace std;

void readDigit(int& digit)
{
    cout<<"Enter the Number to print it in words: \n";
    cin>>digit;
}

string convertToWords(int digit)
{
    switch(digit)
    {
         case 0: cout << "Zero";
            case 1: return "One";
            case 2: return "Two";
            case 3: return "Three";
            case 4: return "Four";
            case 5: return "Five";
            case 6: return "Six";
            case 7: return "Seven";
            case 8: return "Eight";
            case 9: return "Nine";
            default: return "invalid input";
    }
}

void print(string DigitInWords)
{
    cout<<DigitInWords;
}
int main()
{
    int digit = 0;
    readDigit(digit);
    print(convertToWords(digit));


    return 0;
}
