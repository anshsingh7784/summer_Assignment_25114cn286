#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    cout << "Enter a string :";
    string s;
    getline(cin,s);
    cout<<"String = "<<s<<"\n";
    for(char &c:s)
    {
        c=toupper(c);
  
    }
    cout<<"String = "<<s<<"\n";
    return 0;
}