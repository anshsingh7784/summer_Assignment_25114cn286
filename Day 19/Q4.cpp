#include<iostream>
#include<vector>

using namespace std;

int main() {
    cout << "Enter rows: ";
    int r;
    cin >> r;
    
    cout << "Enter cols: ";
    int c;
    cin >> c;
    
    if (r <= 0 || c <= 0 || r!=c) {
        cout << "error";
    } else {   
        // Vector initialization
        vector<vector<int>> a(r, vector<int>(c));
       
        // Input for A
        cout << "Enter the elements in a:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        int sumleft=0;
        int sumright=0;
        // Sum of Diagonal elements
        for (int i = 0; i < r; i++) 
        {
           sumleft += a[i][i];                
           sumright += a[i][r - 1 - i];       
        }
        
        // Print A
        cout << "A. :\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
        cout<<"Sum of left diagonal or primary diagonal elements :"<<sumleft<<"\n";
        cout<<"Sum of right diagonal or secondary diagonal elements :"<<sumright<<"\n";
    }
    
    return 0;
}