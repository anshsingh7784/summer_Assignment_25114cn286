#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of array :";
    int n;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Array :";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array :";
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
    
}