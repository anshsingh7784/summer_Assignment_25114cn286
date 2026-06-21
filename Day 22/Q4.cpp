#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    cout<<"Enter the string :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
    int l=s.length();
   for(int i=0;i<l;i++)
   {
    if(s[i]==32)
    {
    s.erase(i,1);
    i--;
    }
   }
   cout<<"String without space :"<<s<<"\n";
    return 0;
}