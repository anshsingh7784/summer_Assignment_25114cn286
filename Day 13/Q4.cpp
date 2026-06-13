#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter  the size of the array: ";
    int n;
    cin>>n;
    int even=0,odd=0;
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
        if(a[i]%2==0)
        even++;
        else 
        odd++;
    }
    cout<<endl;
    cout<<"Number of even elements: "<<even<<endl;
    cout<<"Number of odd elements: "<<odd<<endl;
    return 0;
}