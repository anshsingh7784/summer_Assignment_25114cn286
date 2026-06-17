#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"Enter the size of first array :";
    int n1;
    cin>>n1;
    cout<<"Enter the size of second array :";
    int n2;
    cin>>n2;
    vector<int> a1(n1);
    vector<int> a2(n2);
    unordered_set<int> s;//to remove duplicates.
    vector<int> u;//union of two arrays.
    cout<<"Enter the elements in the 1st array :";
    for(int i=0;i<n1;i++)
    {
    cin>>a1[i];
    if(!s.count(a1[i]))
    {
        u.push_back(a1[i]);
    s.insert(a1[i]);
    }
    }
    cout<<"Enter the elements in the 2nd array :";
    for(int i=0;i<n2;i++)
    {
    cin>>a2[i];
    if(!s.count(a2[i]))
    {
        u.push_back(a2[i]);
    s.insert(a2[i]);
    }
    }
    cout<<"1st array :";
    for(int i:a1)
    cout<<i<<" ";
    cout<<"\n";
    cout<<"2nd array :";
    for(int i:a2)
    cout<<i<<" ";
    cout<<"\n";
     cout<<"Union of arrays :";
    for(int i:u)
    cout<<i<<" ";
    cout<<"\n";
}