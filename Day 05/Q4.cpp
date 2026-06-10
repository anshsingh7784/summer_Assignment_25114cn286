#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=0;
    for(int i=2;i*i<=n;i++)
{
    while(n%i==0)
        {
            max=i;
            n/=i;
        }
}
if(n > 1) 
{
        max = n;
    }
cout<<max<<endl;
return 0;
}