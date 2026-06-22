#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    cout<<"Enter a string :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
    int max=0;
    string w="";
    s=s+" ";
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
         if(isalnum(ch))
         c++;
         else
         {
            if(c>max)
            {
            max=c;
            w=s.substr(i-c,c);
            }
            c=0;
         }
    }
    cout<<"longest word :"<<w<<"\n";
    return 0; 
}