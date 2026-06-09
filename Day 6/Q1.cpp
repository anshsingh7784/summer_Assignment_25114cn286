#include<iostream>
#include<cmath>
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
    long b=0;int x=0;
   
    for(int i=n;i>0;i/=2)
    {
       b=b+(i%2)*pow(10,x);
       x++;
    }
    cout<<b<<endl;

return 0;
}