#include <iostream>
#include <vector>
using namespace std;

int ReadNumber()
{
    int num = 0;
    cout << "Enter a number? ";
    cin >> num;
    return num;
}

string numberToText(int Number)
{
    if (Number == 0)
        return "Zero";

    string TextNum = "";
    
    if (Number >= 1 && Number <= 19)
    {
        string arr[] = { "",
        "One","Two","Three","Four","Five","Six","Seven",
        "Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen",
        "Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
        return arr[Number] + " ";
    }
    if (Number >= 20 && Number <= 99)
    {
        string arr[] = {
        "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty"
        ,"Ninety" };
        return arr[Number / 10] + " " + numberToText(Number % 10);
    }

    if (Number >= 100 && Number <= 199)
    {
        return "One Hundred " + numberToText(Number % 100);
    }

    if (Number >= 200 && Number <= 999)
    {
        return numberToText(Number / 100) + "hundreds " + numberToText(Number % 100);
    }

    if (Number >= 1000 && Number <= 1999)
    {
        return "One Thaosand " + numberToText(Number % 1000);
    }

    if (Number >= 2000 && Number <= 999999)
    {
        return numberToText(Number / 1000) + "Thosands " + numberToText(Number % 1000);
    }

    if (Number >= 1000000 && Number <= 1999999)
    {
        return "one Million " + numberToText(Number % 1000000);
    }

    if (Number >= 2000000 && Number <= 999999999)
    {
        return numberToText(Number / 1000000) + "Millions " + numberToText(Number % 1000000);
    }

    if (Number >= 1000000000 && Number <= 1999999999)
    {
        return "One Billion " + numberToText(Number %
            1000000000);
    }
    else
    {
        return numberToText(Number / 1000000000) + "Billions " +
            numberToText(Number % 1000000000);
    }
}

int main()
{

    cout << numberToText(ReadNumber());

    return 0;
}
