#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of the array: ";
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
    cout<<"The elements of the array are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";    
    }
    cout<<endl;
    return 0;

}