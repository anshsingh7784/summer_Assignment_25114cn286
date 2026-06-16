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
    cout<<"Enter the number of positions to rotate array left: ";
    int d;
    cin>>d;
    d=d%n;
    cout<<"the rotated array is: ";
    vector<int> temp(d);
    for(int i=0;i<d;i++)
    temp[i]=a[i];
    for(int i=d;i<n;i++)
    a[i-d]=a[i];
    for(int i=0;i<d;i++)
    a[n-d+i]=temp[i];
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl; 
    return 0;

}