#include<iostream>
using namespace std;
int sum(int n)
{
    n=abs(n);
    if(n==0)
    return 0;
    else
    return n%10+sum(n/10);
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of digits of "<<n<<" is "<<sum(n)<<endl;
    return 0;
}