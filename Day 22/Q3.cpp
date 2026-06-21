#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    cout<<"Enter the string :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
   map<char,int> freq;
   for(char c:s)
   {
    freq[c]++;
   }
   for( pair<const char,int> c:freq)
   {
    cout<<"Frequency of "<<c.first<<" : "<<c.second<<"\n";
   }
   
    return 0;
}