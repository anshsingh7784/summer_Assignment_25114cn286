#include<iostream>
#include<vector>
using namespace std;   
int main()
{
    cout<<"Enter the number of elements in the array: ";
    int n;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)    
        cin>>a[i];  
    cout<<"The elements of the array are: ";
    for(int i=0;i<n;i++)    
        cout<<a[i]<<" ";
        cout<<endl;
        int sum=(n+1)*(n+2)/2;//sum of first n natural numbers where n=n+1 as one number is missing
        int actual=0;
        for(int i=0;i<n;i++)
            actual+=a[i];
        int missing=sum-actual;
        cout<<"The missing number is: "<<missing<<endl;
    return 0;
} 
