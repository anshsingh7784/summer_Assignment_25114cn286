#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int ogA=a;//original value of a
    int ogB=b;//original value of b
    if(a==0||b==0)
    {
        cout<<"LCM of "<<ogA<<" and "<<ogB<<" is 0"<<endl;
        return 0;
    }
    else
    {
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    //a is the GCD of ogA and ogB
    //LCM of ogA and ogB is (ogA*ogB)/GCD(ogA,ogB)
    cout<<"LCM of "<<ogA<<" and "<<ogB<<" is "<<(ogA/a)*ogB<<endl;
    return 0;
}
}