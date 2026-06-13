#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;
   vector<int> a;
   cout<<"Enter the elements of the array: ";
   for(int i=0;i<n;i++)   
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int max=INT_MIN;
    int max2=INT_MIN;
    cout<<"the array elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        if(a[i]>max)
        {
            max2=max;
            max=a[i];
        }
        else if(a[i]>max2 && a[i]<max)
      {
         max2=a[i];
      }
    }
    cout<<endl;
    if(max2==INT_MIN)
    {
        cout<<"There is no second largest element in the array."<<endl;
    }
    else
    cout<<"the second largest element in the array is: "<<max2<<endl;
    return 0;
}