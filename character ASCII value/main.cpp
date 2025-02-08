#include <iostream>

using namespace std;

char readChar()
{
     char c;
    cout<<"Enter an charcter to give you the ASSCI code of it \n";
    cin>>c;
    return c;
}

int characterASSCICode(char c)
{
  int ASSCI_VALUE = (int)c;
  return ASSCI_VALUE;
}

void print(int ASSCI_VALUE)
{
    cout<<"the ASSCI value is: "<<ASSCI_VALUE;
}
int main()
{
    print(characterASSCICode(readChar()));
    return 0;
}
