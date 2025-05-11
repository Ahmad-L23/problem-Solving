
#include <iostream>

using namespace std;

string ReadText()
{
    string text = "";
    cout << "Pleas Enter Your name To Enecrypt It" << endl;
    cin >> text;
    return text;
}

string EncryptText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.size(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
   
}

string DecrytText(string Text, short EncryptionKey)
{
    for (int i = 0; i < Text.size(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}

int main()
{
    const short EncryptionKey = 2;

    string Text = ReadText();
   
   string TextAfterEncryption = EncryptText(Text, EncryptionKey);
   string TextAfterDecryption = DecrytText(TextAfterEncryption, EncryptionKey);


   cout << "\nText Before Encryption : " << Text << endl;
   
   cout << "Text After Encryption  : " << TextAfterEncryption << endl;
  
   cout << "Text After Decryption  : " << TextAfterDecryption << endl;

}

