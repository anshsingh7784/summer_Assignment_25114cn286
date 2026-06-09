#include<iostream>
using namespace std;
int rev(int n)
{
    n=abs(n);
    if(n==0)
    return 0;
    else
    return (n%10)*pow(10,(int)log10(n))+rev(n/10);//to reverse the number
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is "<<rev(n)<<endl;
    return 0;
}