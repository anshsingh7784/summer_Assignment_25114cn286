#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"Enter a string :";
    string s;
    getline(cin,s);
    unordered_set<char> seen;
    unordered_set<char> printed;
    int count=0;
    cout<<"String :"<<s<<"\n";
    cout<<"common characters are :\n";
    for(char c:s)
    {
        if(!seen.count(c))
        seen.insert(c);
        else
        {
            if(!printed.count(c))
            {
              printed.insert(c);
              cout<<c<<"\n";
              count++;
            }
        }
        
    }
    if(count==0)
    cout<<"no common characters .\n";
    return 0;
}