#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n=abs(n);
    int product=1;
    for(int i=n;i>0;i/=10)
    {
        product*=i%10;
    }
    cout<<product<<endl;
    return(0);
}