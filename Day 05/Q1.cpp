#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=1)
    {
        cout<<"No factors";
        return 0;
    }
    int s=1;//1 is always a factor of any number
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s==n)
    {
        cout<<"Perfect number";
    }
    return 0;
   
}