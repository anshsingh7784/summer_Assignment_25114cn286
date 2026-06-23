#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of 1st sorted array :";
    int n1;
    cin>>n1;
    cout<<"Enter the size of 2nd sorted array :";
    int n2;
    cin>>n2;
    vector<int> a(n1);
    vector<int> b(n2);
    cout<<"Enter the 1st array :";
    for(int i=0;i<n1;i++)
    {
       cin>>a[i]; 
    }
    cout<<"Enter the 2nd array :";
    for(int i=0;i<n2;i++)
    {
       cin>>b[i]; 
    }
      cout<<"Array 1 :";
    for(int x:a)
    {
       cout<<x<<" ";
    } 
    cout<<"\n";
      cout<<"Array 2 :";
    for(int x:b)
    {
       cout<<x<<" ";
    } 
    cout<<"\n";
    vector<int> merge(n1+n2);
    int c=0;
    int d=0;
    int k=0;
    while(c<n1&&d<n2)
    {
        if(a[c]<b[d])
        {
            merge[k++]=a[c];
            c++;
        }
        else
        {
            merge[k++]=b[d];
            d++;
        }
    }
    while(c<n1)
    {
        merge[k++]=a[c++];
    }
    while(d<n2)
    {
        merge[k++]=b[d++];
    }
     cout<<"Array after merge :";
    for(int x:merge)
    {
       cout<<x<<" ";
    } 
    cout<<"\n";
    return 0;

}