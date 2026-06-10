#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    n=n+64;//ASCII value of A is 65
   for(int i=65;i<=n;i++)//loop for rows
   {
       for(int k=65;k<=65+n-i;k++)//loop for spaces
       cout<<" "<<" ";
       for(int j=65;j<=i+i-65;j++)//loop for columns
       {
        if(j<=i)
        cout<<char(j)<<" ";
        else
        cout<<char(i+i-j)<<" ";

       }
       cout<<endl;
   }
   return 0;
   
}