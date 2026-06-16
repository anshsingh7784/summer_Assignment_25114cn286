#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"Enter the size of array :";
    int n;
    cin>>n;
    cout<<"Enter the elements :";
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"original array :";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
   
    unordered_set<int> num;
    int x=0;
    for(int i=0;i<n;i++)
    {
        if(!num.count(a[i]))
        {
           a[x++]=a[i];
            num.insert(a[i]);
        }

    }
    a.resize(x);
    cout<< "Array without duplicates :";
    for(int i:a)
    cout<<i<<" ";
    cout<<"\n";
    return 0;

}