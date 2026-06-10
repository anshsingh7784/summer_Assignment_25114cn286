#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
   for(int i=1;i<=n;i++)//Outer loop for rows
   {
       for(int j=1;j<=n;j++)
       {
        if(i==1||i==n||j==1||j==n)
        {
            cout<<"*"<<" ";
        }
        else
        cout<<" "<<" ";

       }
       cout<<endl;
   }
   return 0;
   
}