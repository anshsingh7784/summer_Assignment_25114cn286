#include<iostream>
#include<vector>
using namespace std;
int main()
{
   cout<<"Enter no. of rows of the matrix :";
   int r;
   cin>>r;
   cout<<"Enter no. of columns of the matrix :";
   int c;
   cin>>c;
   if(r<=0||c<=0)
   cout<<"error";
   else
   {
        vector<vector<int>> A(r,vector<int>(c));
        vector<int> sum(c,0);
        cout<<"Enter the elements in the matrix : ";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<"\n";
        
        for(int j=0;j<c;j++)
        {
            int s=0;
            for(int i=0;i<r;i++)
            {
               s+=A[i][j];
            }
            sum[j]=s;
        }
        cout<<"The matrix and column-wise sum:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"  "<<A[i][j]<<"        ";
            }
        cout<<"\n";
        }
        for(int i=0;i<c;i++)
        {
            cout<<"sum : "<<sum[i]<<"  ";
        }
        cout<<"\n";
   }
   return 0;
}