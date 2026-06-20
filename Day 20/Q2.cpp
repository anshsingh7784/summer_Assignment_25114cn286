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
   if(r<=0||c<=0||r!=c)
   cout<<"error";
   else
   {
        int Symmetric=1;
        vector<vector<int>> A(r,vector<int>(c));
        cout<<"Enter the elements in the matrix : ";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<"\n";
        cout<<"The matrix :\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<A[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(A[i][j]!=A[j][i])
                {
                    Symmetric=0;
                    break;
                }
            }
          if(!Symmetric)
           break;
        }
        if(Symmetric)
        cout<<"Entered matrix is a Symmetric Matrix \n";
        else
        cout<<"Entered matrix is not a Symmetric Matrix \n";
   }
   return 0;
}