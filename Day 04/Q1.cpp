#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   n=n-2;
   int a=0,b=1,c=0;
   cout<<a<<" "<<b<<" ";
   for(int i=0;i<n;i++)
   {
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
   }
   cout<<endl;
   return 0;
}