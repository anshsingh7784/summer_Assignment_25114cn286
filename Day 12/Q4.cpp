#include<iostream>
using namespace std;
bool perfect(int n)
{
    int sum=1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    return sum==n;
}
int main()
{
  int n;
  cout<<"enter a number :"<<endl;
  cin>>n;
  if(perfect(n))
  cout<<n<<" is a perfect number."<<endl;
  else
  cout<<n<<" is not a perfect number."<<endl;
  return 0; 
}