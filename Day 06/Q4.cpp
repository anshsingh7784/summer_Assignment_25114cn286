#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    cout<<"enter power: ";
    int n;
    cin>>n;
    int temp=x;
    for(int i=2;i<=n;i++)
    {
        x=x*temp;
    }
    cout<<x<<endl;
    return 0;
}