#include <iostream>
#include<vector>
using namespace std;

vector<int>readNumbers()
{
    int testCases;
    cin >> testCases;
    vector<int> numbers(testCases);
    for (int &num : numbers) {
        cin >> num;
    }
    return numbers;
}

int findLastDigit(int num)
{
    return num%10;
}

int removeLastDigit(int num)
{
    return num/10;
}
vector<int> findRoundNumbers(int num)
{
    vector<int>roundNumbers;
    int lastDigit=0, placeValue=1;
    while(num>0)
    {
        lastDigit = findLastDigit(num);
         if(lastDigit != 0)
             roundNumbers.push_back(placeValue * lastDigit);

         placeValue*=10;
         num=removeLastDigit(num);
    }
    return roundNumbers;
}

void printRoundedNums(const vector<int> &roundNums)
{
    cout << roundNums.size() << endl;
    for (int num : roundNums)
    {
        cout << num << " ";
    }
    cout << endl;
}

void minimumNumberOfSummands(const vector<int> &numbers)
{
    for (int num : numbers)
    {
        vector<int> roundNumbers = findRoundNumbers(num);
        printRoundedNums(roundNumbers);
    }
}


int main()
{
    minimumNumberOfSummands(readNumbers());
    return 0;
}
