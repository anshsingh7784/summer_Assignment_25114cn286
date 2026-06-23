#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
    cout<<"Enter a String full of different names :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
    stringstream ss(s);
    string word="";
    vector<string> words;
    while(ss>>word)
    {
        words.push_back(word);
    }
    int mini=0;
    int size=words.size();
    for(int i=0;i<size;i++)
    {
        mini=i;
        for(int j=i+1;j<size;j++)
        {
            string a=words[j];
            string b=words[mini];
            if(a<b)
            {
                mini=j;
            }
          
        }
        if(mini!=i)
        {
            string t=words[i];
            words[i]=words[mini];
            words[mini]=t;
        }
    }
    cout<<"String sorted alphabetically :\n";
    for(string x:words)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    return 0;

}