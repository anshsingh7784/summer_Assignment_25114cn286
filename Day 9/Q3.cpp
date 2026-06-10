#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
   for(int i=65;i<65+n;i++)//ASCII value of A is 65
   {
       for(int j=65;j<=i;j++)
       {
        cout<<char(i)<<" ";

       }
       cout<<endl;
   }
   return 0;
   
}