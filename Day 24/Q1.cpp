#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter a String .";
    string s1;
    getline(cin,s1);
    cout<<"Enter another String .";
    string s2;
    getline(cin,s2);
    cout<<"String 1 :"<<s1<<"\n";
    cout<<"String 2 :"<<s2<<"\n";
    if(s1.length()!=s2.length()||s1.empty())
    {
        cout<<"String is not rotated.\n";
    }
    else
    {
    string temp=s1+s1;
    if(temp.find(s2)!=string::npos)
    cout<<"String is rotated by "<<temp.find(s2)<<" positions.\n";
    else
    cout<<"String is not rotated. \n";
    }
return 0;

    
}