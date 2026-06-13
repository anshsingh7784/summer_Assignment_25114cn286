#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"enter the size of the array: ";
    int n;
    cin>>n;
    int sum=0;
    vector<int> a;
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
        sum+=temp;
    }
    cout<<"the array elements are: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";    
    }
    cout<<endl;
    cout<<"the sum of the array elements is: "<<sum<<endl;
    cout<<"the average of the array elements is: "<<(double)sum/n<<endl;
    return 0;
}
