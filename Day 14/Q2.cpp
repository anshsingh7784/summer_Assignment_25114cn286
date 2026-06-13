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
    int c=0;//count variable
    while(i<n)
    {
        if(a[i] == num)
        {
            found = true;
            cout<<"Element found at index: "<<i<<endl;
         c++;
        }
        i++;
    }
    if(found)
    {
        cout<<"Element found "<<c<<" times in the array."<<endl;
    }
    else
    {
        cout<<"Element not found in the array."<<endl;
        
    }

    return 0;
}


