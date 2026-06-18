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
        int maxidx=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[maxidx])
            maxidx=j;
        }
        if(maxidx!=i)
        {
            int temp=a[i];
            a[i]=a[maxidx];
            a[maxidx]=temp;
        }
    }
    cout<<"Array Sorted in Descending order :";
    for(int i:a)
    cout<<i<<" ";
    cout<<"\n";
    return 0;
}
