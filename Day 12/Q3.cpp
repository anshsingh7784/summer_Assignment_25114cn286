#include<iostream>
using namespace std;
int isfabonacci(int n)
{
    int a=0,b=1,c;
    if(n==a || n==b)
    return 1;
    for(int i=2;c<=n;i++)
    {
        c=a+b;
        if(c==n)
        return 1;
        a=b;
        b=c;
    }
    return 0;
}
int main()
{  int n;
  cout<<"enter a number :"<<endl;
  cin>>n;
  if(isfabonacci(n))
  cout<<n<<" is a fabonacci number."<<endl;
  else 
   cout<<n<<" is not a fabonacci number."<<endl;
  return 0; 
}   

