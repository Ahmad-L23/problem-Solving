#include <iostream>
#include<vector>

using namespace std;

enum enSumOtherTwo{YES, NO};
void readTestCases(int &testCases)
{
    cin>>testCases;
}
void readNums(vector<int>& nums)
{
    for(int &num:nums)
        cin>>num;
}

int calcSum(vector<int>& nums)
{
    return nums[0] + nums[1] + nums[2];
}

bool isSumOfOthers(int sum, vector<int>& nums)
{
    for(int &num : nums)
        if((sum-num) == num)
            return true;

     return false;
}

vector<enSumOtherTwo> sumOfTheOtherTwo(int testCases)
{
    vector<int>nums(3);
    vector<enSumOtherTwo>answers;
    while(testCases--)
    {
        readNums(nums);
        int sum = calcSum(nums);
        if(isSumOfOthers(sum, nums))
            answers.push_back(YES);
        else
            answers.push_back(NO);
    }
    return answers;
}

void printResult(const vector<enSumOtherTwo>& results)
{
    for(const enSumOtherTwo &result : results){
    if(result == YES)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    }

}
int main()
{
    int testCases=0;
    readTestCases(testCases);
    printResult(sumOfTheOtherTwo(testCases));
    return 0;
}
