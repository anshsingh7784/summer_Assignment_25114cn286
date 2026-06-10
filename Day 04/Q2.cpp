#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c=0;
    for(int i=2;i<n;i++)
    {
        c=a+b;
       
        a=b;
        b=c;
    }
    cout<<"Nth term ="<<c<<endl;
    return 0;
}