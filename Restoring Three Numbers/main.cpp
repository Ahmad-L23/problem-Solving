#include <iostream>
#include <vector>

using namespace std;

int maximumNum = 0;

vector<int> readNumbers()
{
    vector<int> nums(4);
    for (auto &num : nums)
        cin >> num;
    return nums;
}

int findMaximum(const vector<int> &nums)
{
    int maxNum = nums[0];
    for (auto num : nums)
        maxNum = max(num, maxNum);
    return maxNum;
}

vector<int> findNumbers(vector<int> &nums)
{
    /*
      The given numbers represent:
      a+b, a+c, b+c, and a+b+c
      The maximum number is a+b+c
      We can derive:
      a = (a+b+c) - (b+c)
      b = (a+b+c) - (a+c)
      c = (a+b+c) - (a+b)
    */

    maximumNum = findMaximum(nums);
    vector<int> results;

    for (auto num : nums)
    {
        if (num != maximumNum)
            results.push_back(maximumNum - num);
    }

    return results;
}

void printNums(const vector<int> &nums)
{
    for (auto num : nums)
        cout << num << " ";
}

int main()
{
    vector<int> nums = readNumbers();
    vector<int> restoredNums = findNumbers(nums);
    printNums(restoredNums);
    return 0;
}
