#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"Enter the size of  array :";
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> c;//common elements
    unordered_set<int> num;
    unordered_set<int> common;
    cout<<"Enter the elements in the array :";
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(!num.count(a[i]))
    {
      num.insert(a[i]);
    }
    else
    {
    if(!common.count(a[i]))
    {
      common.insert(a[i]);
      c.push_back(a[i]);
    }
    }
    }
cout<<"array :";
    for(int i:a)
    cout<<i<<" ";
    cout<<"\n";
    
    cout<<"common elements :";
    for(int i:c)
    cout<<i<<" ";
    cout<<"\n";
    
 return 0;
}