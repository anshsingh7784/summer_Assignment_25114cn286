#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your age :";
    int age;
    cin>>age;
    if(age<0)
    cout<<"INvalid input.\n";
    else
    {
       if(age>=18)
       cout<<"Elegible to vote.\n";
       else
       cout<<"NOT Elegible to vote.\n";
    }
    return 0;
}