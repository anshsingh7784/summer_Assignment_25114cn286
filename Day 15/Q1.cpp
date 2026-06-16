#include<iostream>
using namespace std;    
int main()
{
    cout<<"Enter the size of the array: "; 
    int n;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<< "the original array is: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    cout<<"the reversed array is: ";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    return 0;

}