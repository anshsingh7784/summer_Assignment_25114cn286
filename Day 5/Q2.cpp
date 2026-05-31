#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;//sum of factorial of digits
    for(int i=n;i>0;i/=10)
    {
        int fact=1;
        for(int j=1;j<=i%10;j++)
        {
            fact*=j;
        }
        s+=fact;
    }
    if(s==n)
    {
        cout<<"Strong number"<<endl;
    }
    else
    {
        cout<<"Not a strong number"<<endl;
    }
    return 0;
}