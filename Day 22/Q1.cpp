#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Enter the string :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
    int palindrome =1;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
        {
            palindrome=0;
            break;
        }
    }
    if(palindrome)
    cout<<"palindrome \n";
    else
    cout<<"not palindrome \n";
    return 0;
}