#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<" Enter the size of the array: ";
    int n;
    cin>>n;
    vector<int> a;
    cout<<" Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);//push_back is used to add elements to the end of the vector
    }
    int max=a[0];
    int min=a[0];
    cout<<" The elements of the array are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
        if(a[i]>max)
        max=a[i];
        else if(a[i]<min)
        min=a[i];  
    }
    cout<<endl;
    cout<<" The maximum element in the array is: "<<max<<endl;
    cout<<" The minimum element in the array is: "<<min<<endl;
    return 0;
}