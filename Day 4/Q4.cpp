#include<iostream>
using namespace std;
int main()
{
    int limit;
    cin>>limit;
    for(int x=0;x<=limit;x++)
    {
    int n;
    n=x;
    int s=0;//sum
    int d=0;//digits
    int temp=n;
    while(temp>0)
    {
        d++;
        temp/=10;
    }
    
    for(int i=n;i>0;i/=10)
{
    int r=i%10;
    s=s+pow(r,d);
}
if(s==n)
{
    cout<<n<<" "<<endl;
}

    }
    return 0;
}