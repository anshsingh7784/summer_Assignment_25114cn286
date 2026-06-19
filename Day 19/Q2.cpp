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
    
    if (r <= 0 || c <= 0) {
        cout << "error";
    } else {   
        // Vector initialization
        vector<vector<int>> a(r, vector<int>(c));
        vector<vector<int>> b(r, vector<int>(c));
        vector<vector<int>> result(r, vector<int>(c, 0));

        // Input for A
        cout << "Enter the elements in a:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        
        // Input for B
        cout << "Enter the elements in b:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> b[i][j];
            }
        }
        
        // Subtraction
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result[i][j] = a[i][j] - b[i][j];
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
        
        // Print B
        cout << "B:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << b[i][j] << " ";
            }
            cout << "\n";
        }
        
        // Print Result
        cout << "A - B:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}