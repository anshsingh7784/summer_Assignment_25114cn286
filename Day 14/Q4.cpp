#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"Enter the number of elements :"<<endl;
    int n;
    cin>>n;
    vector<int> a;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    cout<<"the array elements are: "<<endl;     
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    unordered_set<int> seen;
    unordered_set<int> duplicates;
    cout<<"the duplicate elements in the array are: "<<endl;
    for(int num: a)
    {
        if(seen.count(num))
        duplicates.insert(num);
        else
        seen.insert(num);
    }
    cout<<endl;
    if(duplicates.empty())
    {
        cout<<"No duplicate elements found in the array."<<endl;
    }
    else
    {
        for(int num: duplicates)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}