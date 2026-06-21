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
    int found=0;
    for(char c:s)
    {
        if(freq[c]==1)
        {
            found=1;
            cout<<"The first non-repeating character :"<<c<<"\n";
            break;
        }

    }
    if(!found)
    cout<<"no first non repeating character. \n";

   return 0;

}