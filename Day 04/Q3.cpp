#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
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
    cout<<n<<" is an armstrong number"<<endl;
}
else
{
    cout<<n<<" is not an armstrong number"<<endl;
}
    return 0;
}