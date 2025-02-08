#include <iostream>

using namespace std;

int* readNumbers(int& Size){
    cout<<"Enter The Size Of Array:"<<endl;
    cin>>Size;
    int* Numbers = new int[Size];
    for(int i=0;i<Size;i++){
        cout<<"Enter The Value Of Element Number "<< i+1<<": ";
        cin>>Numbers[i];
    }
    return Numbers;
}

int* sortedArray(int* Numbers,int Size){
    int Min;
    int i;
    int j;
    for(i=0 ; i<Size ; i++){
             Min=Numbers[i];
        for(j=i+1 ; j<Size ; j++){
            if(Min>Numbers[j]){
               Min=Numbers[j];
               Numbers[j]=Numbers[i];
               Numbers[i]=Min;
            }
        }
    }
    return Numbers;
}
void print(){
  int Size=0;
  int* data=readNumbers(Size);
  int* Numbers = sortedArray(data,Size);
  cout<<"Numbers after Ascending Order:"<<endl;
  for(int i=0; i<Size ; i++){
    cout<<Numbers[i];
    if(i<Size-1){
        cout<<", ";
    }

  }
  delete [] Numbers;
}
int main()
{
    print();
    return 0;
}
