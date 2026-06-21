#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout << "Enter a string :";
    string s;
    getline(cin,s);
    int len=s.length();
    cout<<"String = "<<s<<"\n";
    for(int i=0;i<len/2;i++)
    {
        char t=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]= t;
    }
   
    cout<<"Reversed String = "<<s<<"\n";
    
    return 0;
}