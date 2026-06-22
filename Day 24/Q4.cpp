#include<iostream>
#include<string>
#include<unordered_set>
#include<cctype>
using namespace std;
int main()
{
    cout<<"Enter a string :";
    string s;
    string news="";
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
    unordered_set<char> ch;
    for(char c:s)
    {
        
        if((!ch.count(c))&&isalnum(c))
        {
            ch.insert(c);
            news+=c;
        }
        
    }
    cout<<"new String after removing duplicate characters :"<<news<<"\n";
    return 0;
}