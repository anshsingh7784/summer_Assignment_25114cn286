#include<iostream>
#include<vector>
using namespace std;
int main()
{
   cout<<"Enter no. of rows of 1st matrix :";
   int r1;
   cin>>r1;
   cout<<"Enter no. of columns of 1st matrix :";
   int c1;
   cin>>c1;
   cout<<"Enter no. of rows of 2nd matrix :";
   int r2;
   cin>>r2;
   cout<<"Enter no. of columns of 2nd matrix :";
   int c2;
   cin>>c2;
   if(c1!=r2||r1<=0||r2<=0||c1<=0||c2<=0)
   cout<<"error";
   else
   {
        vector<vector<int>> A(r1,vector<int>(c1));
        vector<vector<int>> B(r2,vector<int>(c2));
        vector<vector<int>> Result(r1,vector<int>(c2,0));
        cout<<"Enter the elements in 1st matrix : ";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<"Enter the elements in 2nd matrix : ";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cin>>B[i][j];
            }
        }
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                for(int k=0;k<c1;k++)
                {
                    Result[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        cout<<"\n";
        cout<<"The 1st matrix :\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        cout<<"The 2nd matrix :\n";
        for(int i=0;i<r2;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<B[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        cout<<"Result ( 1st matrix * 2nd matrix ) :\n";
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                cout<<Result[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
   }
   return 0;

}