#include <iostream>

using namespace std;

enum enPassFail{pass, fail};
void readMarks(double& Mark1, double& Mark2, double& Mark3)
{
    cout<<"Enter Three marks1: ";
    cin>>Mark1;
    cout<<"\n Enter Three marks2: ";
    cin>>Mark2;
    cout<<"\n Enter Three marks3: ";
    cin>>Mark3;
}

double SumOfMarks(double mark1, double mark2, double mark3)
{
    return mark1 + mark2 + mark3;
}

double avergeOfmarks(double mark1, double mark2, double mark3)
{
    return SumOfMarks(mark1, mark2, mark3)/3;
}

enPassFail checkAverge(double mark)
{
    if(mark >= 50)
        return enPassFail::pass;
    else
        return enPassFail::fail;
}

void print(double averge)
{
    if(checkAverge(averge) == enPassFail::pass)
    {
        cout<<"you have passed the class";
    }
    else{
        cout<<"you field";
    }
}
int main()
{
    double mark1, mark2, mark3;
    readMarks(mark1, mark2, mark3);
    print(avergeOfmarks(mark1, mark2, mark3));
    return 0;
}
