#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    cout<<"Enter 1st String :";
    string s1;
    getline(cin,s1);
    cout<<"String 1 :"<<s1<<"\n";
    cout<<"Enter 2nd String :";
    string s2;
    getline(cin,s2);
    cout<<"String 2 :"<<s2<<"\n";
     if(s1.length()!=s2.length())
     {
     cout<<"not anagram.\n";
     }
     else
     {
        int compare=1;
        unordered_map<char,int> freq;
        for(char c: s1)
        {
            freq[c]++;
        }
        for(char c: s2)
        {
            freq[c]--;
        }
        for(pair<const char,int > c:freq)
        {
            if(c.second!=0)
            {
                compare=0;
                break;
            }
        }
        if(compare)
        cout<<"Anagram Strings.\n";
        else
         cout<<"not anagram string.\n";
     }
     return 0;

}