#include<iostream>
using namespace std;
int main()
{
   int n;
    cin>>n;
    int rev=0;
    for(int i=n;i>0;i/=10)
    {
        rev=rev*10+(i%10);
    }
    if(rev==n)
    {
        cout<<n<<"is a palindrome number."<<endl;
    }
    else
    {
        cout<<n<<"is not a palindrome number."<<endl;
    }
    return(0);
}