#include<iostream>
using namespace std;
bool arm(int n)//function to check if a number is an armstrong number or not
{
    int sum=0;
    for(int i=n;i>0;i/=10)
    {
        sum=sum+pow(i%10,(int)log10(n)+1);
    }
    return sum==n;
}
int main()
{
  int n;
  cout<<"enter a number :"<<endl;
  cin>>n;
  if(arm(n))
  cout<<n<<" is an armstrong number."<<endl;
  else
  cout<<n<<" is not an armstrong number."<<endl;
  return 0; 
}