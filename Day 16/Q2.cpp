#include<iostream>
#include<vector>
#include<unordered_map>
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
    unordered_map<int,int> freq;
   int maxf=0;//to store the maximum frequency
   int maxnum=a[0];//to store the number with maximum frequency
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
        if(freq[a[i]]>maxf)
    {
         maxf=freq[a[i]];
         maxnum=a[i];
    }

    }
    cout<<"The number with maximum frequency is: "<<maxnum<<" and its frequency is: "<<maxf<<endl;  
   
       
    return 0;
}