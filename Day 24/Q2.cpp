#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter a String :";
    string s;
    getline(cin,s);
    string compressed="";
    int c=0;

    for(int i=0;i<s.length();i++)
    {
        c++;
        if(s[i]!=s[i+1])
        {
        compressed+=s[i]+to_string(c);   
        c=0;
        }     
    }

    cout<<"string :"<<s<<"\n";
    if(s.length()<=compressed.length())
    cout<<"compressed string :"<<s<<"\n";
    else
    cout<<"compressed string :"<<compressed<<"\n";
    return 0;
}