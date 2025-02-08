#include <iostream>
#include <vector>
using namespace std;


int readNumber(){
   int num=0;
   cout<<"enter a number"<<endl;
   cin>>num;
   return num;
}

vector<int> checkIfFactor(int num){
    int temp=1;
    vector<int>nums;
    while(temp<=num){
        if(num%temp==0)
        {
            nums.push_back(num/temp);
        }
        temp++;
    }
    return nums;
}

void display(vector<int> nums){
    for(int num : nums){
        cout<<num<<" , ";
    }

}
int main()
{
    display(checkIfFactor(readNumber()));
    return 0;
}
