#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a string :";
    string s;
    getline(cin,s);
    int len=0;
    for(char c:s)
    {
    len++;
    }
    cout<<"String = "<<s<<"\n";
    cout<<"Length of String : "<<len<<"\n";
    return 0;
}