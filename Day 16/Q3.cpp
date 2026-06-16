#include<iostream>
#include<vector>
#include<unordered_set>

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
        cout<<"Enter the sum to find the pair :";
        int sum;
        cin>>sum;
        unordered_set<int> num;
        int find= 0;
        
        for(int i=0;i<n;i++)
        {
            if(num.count(sum-a[i]))
            {
                find=1;
                cout<<"found :"<<sum-a[i]<<" + "<<a[i]<<" = "<<sum<<endl;
               
            }
           
            num.insert(a[i]);
        }
        if(find==0)
        cout<<"Pair not found"<<endl;
        return 0;
    }



        
       
   
