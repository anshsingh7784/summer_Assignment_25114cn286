#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==1)
    cout<<"prime"<<endl;
    else
    cout<<"not prime"<<endl;
    return(0);
}