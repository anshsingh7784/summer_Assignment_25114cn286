#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    cout<<"Enter a String :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
    unordered_map<char,int> freq;
    for(char c:s)
    {
        freq[c]++;
    }
    char maxc=s[0];
    int maxf=0;
    for(char c:s)
    {
        if(freq[c]>maxf)
        {
            maxc=c;
            maxf=freq[c];
        }
    }
    cout<<maxc<<" is the character with maximum frequency of :"<<maxf<<"\n";
   return 0;

}