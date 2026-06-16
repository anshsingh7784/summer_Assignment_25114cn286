#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"the original array is: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<" Array after moving all 0's to the end: ";
    int nonzero=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[nonzero++]=a[i];
             a[i]=0;
        }
        
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;   
}