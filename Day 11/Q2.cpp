#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Max of "<<a<<" and "<<b<<" : "<<max(a,b)<<endl;
    return 0;
}