#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter the size of array :";
    int n;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements in the sorted array :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Array :";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    cout<<"Enter the element to search :";
    int x;
    cin>>x;
    int l=0;
    int u=n-1;
   int found =0;
  int  index=-1;
    while(l<=u)
    {
      int mid=(l+u)/2;
        if(x==a[mid])
        { 
            found =1;
            index=mid;
            break;
        }
        else if(x>a[mid])
        {
           l=mid+1;
        }
        else
        {
         u=mid-1;
        }
    }
    if(found)
    {
        cout<<"Element found at index :"<<index<<"\n";
    }
    else
        cout<<"Element not found\n";
    return 0;
}
