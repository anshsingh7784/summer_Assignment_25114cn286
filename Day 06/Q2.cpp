#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    int dec=0;
    int base=1;//base is 2^0=1
    for(int i=n;i>0;i/=10)
    {
        dec=dec+(i%10)*base;
        base*=2;
     }
    cout<<dec<<endl;
    return 0;
    }
