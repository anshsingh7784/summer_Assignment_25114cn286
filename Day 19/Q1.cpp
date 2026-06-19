#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter rows :";
    int r;
    cin>>r;
    cout<<"Enter cols :";
    int c;
    cin>>c;
    if(r<=0||c<=0)
    cout<<"error";
    else
    {   vector<vector<int>> a(r,vector<int>(c));
        vector<vector<int>> b(r,vector<int>(c));
        vector<vector<int>> result(r,vector<int>(c,0));

        cout<<"Enter the elements in a :";
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cin>>a[i][j];
        cout<<"Enter the elements in b :";
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cin>>b[i][j];
        for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        result[i][j]=a[i][j]+b[i][j];
        
        cout<<"A :\n";
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
        }
        cout<<"B :\n";
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        cout<<b[i][j]<<" ";
        cout<<"\n";
        }
        cout<<"A + B :\n";
        for(int i=0;i<r;i++)
        {
        for(int j=0;j<c;j++)
        cout<<result[i][j]<<" ";
        cout<<"\n";
        }

    }
    return 0;
}