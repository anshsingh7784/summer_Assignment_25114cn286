#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;// This code is for printing the pattern of characters from A to the nth character in the alphabet.
   for(int i=65;i<65+n;i++)
   {
       for(int j=65;j<=i;j++)
       {
        
        cout<<(char)j<<" ";

       }
       cout<<endl;
   }
   return 0;
   
}