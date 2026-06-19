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
        vector<vector<int>> transpose(r, vector<int>(c, 0));

        // Input for A
        cout << "Enter the elements in a:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        
        // Transpose
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
               transpose[i][j]=a[j][i];
            }
        }
        
        // Print A
        cout << "A:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
 
        // Print Result
        cout << "Transpose of A:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << transpose[i][j] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}