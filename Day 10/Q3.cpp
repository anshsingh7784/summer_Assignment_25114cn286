#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
   for(int i=1;i<=n;i++)
   {
       for(int k=1;k<=n-i;k++)
       cout<<" "<<" ";
       for(int j=1;j<=i+i-1;j++)
       {
        if(j<=i)
        cout<<j<<" ";
        else
        cout<<i+i-j<<" ";

       }
       cout<<endl;
   }
   return 0;
   
}