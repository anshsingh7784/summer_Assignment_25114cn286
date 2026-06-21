#include<iostream>
using namespace std;
int main()
{
    cout << "Enter a string :";
    string s;
    getline(cin,s);
    cout<<"String = "<<s<<"\n";
    int v=0;
    int c=0;
    
    for(char ch:s)
    {
        if((ch>=65&&ch<=90)||(ch>=97&&ch<= 122))
        {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        v++;
    }
    else
    {
        c++;
    }
        }
    }
   cout<<"no. of vowels :"<<v<<"\n";
   cout<<"no. of consonents :"<<c<<"\n";
    return 0;
}