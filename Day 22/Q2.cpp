#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    cout<<"Enter the string :";
    string s;
    getline(cin,s);
    cout<<"String :"<<s<<"\n";
   int words=0;
   bool inword=false;
    for(char c:s)
    {
        if(isalnum(c))
        {
            if(inword==false)
            {
                words++;
                inword=true;
            }
        }
        else
        {
             inword=false;
        }
      
    }
    cout<<"no. of words :"<<words<<"\n";
   
    return 0;
}