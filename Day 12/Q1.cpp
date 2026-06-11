#include<iostream>
using namespace std;
bool palindrome(int n)
{
    int rev=0;
    for(int i=n;i>0;i/=10)
    {
        rev=rev*10+(i%10);
    }
    return rev==n;
}
int main()
{
  int n;
  cout<<"enter a number :"<<endl;
  cin>>n;
  if(palindrome(n))
  cout<<n<<" is a palindrome number."<<endl;
  else
  cout<<n<<" is not a palindrome number."<<endl;
  return 0; 
}
