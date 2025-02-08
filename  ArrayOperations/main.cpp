#include <iostream>

using namespace std;
int* readElementsOfArray(int& Size)
{
    cout<<"Enter Array size"<<endl;
    cin>>Size;
    int* Numbers=new int[Size];
    for(int i=0;i<Size;i++){
        cout<<"Enter element(" << i+1 << ")number"<<endl;
        cin>>Numbers[i];
    }
    return Numbers;
}

int sumOfElements(int* Numbers,int Size)
{
    int sum=0;
    for(int i=0;i<Size;i++){
        sum+=Numbers[i];
    }
    return sum;
}

int findMaxElement(int* Numbers , int Size){
    int Max=Numbers[0];
    for(int i=1;i<Size;i++){
        if(Numbers[i]>Max){
            Max=Numbers[i];
        }
    }
    return Max;
}

int findMinElement(int* Numbers , int Size){
    int Min=Numbers[0];
    for(int i=1;i<Size;i++){
        if(Numbers[i]<Min){
            Min=Numbers[i];
        }
    }
    return Min;
}


void print(){
    int Size=0;
 int* Numbers =readElementsOfArray(Size);
 cout<<"the sum of elements is "<<sumOfElements(Numbers,Size)<<endl;
 cout<<"the maximum element is: "<<findMaxElement(Numbers,Size)<<endl;
 cout<<"the minimum element is "<<findMinElement(Numbers,Size)<<endl;
 delete[] Numbers;
}
int main()
{
    print();
    return 0;
}
