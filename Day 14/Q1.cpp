#include<iostream>
#include<vector>
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
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<< "Enter the number to be searched: "<<endl;
    int num;
    cin>>num;
    bool found = false;
    int i=0;
    while(i<n)
    {
        if(a[i] == num)
        {
            found = true;
            cout<<"Element found at index: "<<i<<endl;
        break;
        }
        i++;
    }
    if(!found)
    {
        cout<<"Element not found in the array."<<endl;
        
    }
    return 0;
}


