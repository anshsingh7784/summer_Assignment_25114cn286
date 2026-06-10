#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
   for(int i=n;i>=1;i--)
   {
       for(int k=n-i;k>=1;k--)
       cout<<" "<<" ";
       for(int j=i+i-1;j>=1;j--)
       {
        cout<<"*"<<" ";

       }
       cout<<endl;
   }
   return 0;
   
}