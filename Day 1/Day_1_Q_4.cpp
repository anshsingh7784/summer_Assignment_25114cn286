#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=n;i>0;i/=10)
    {
        c++;
    }
    cout<<c<<endl;
    return(0);
}