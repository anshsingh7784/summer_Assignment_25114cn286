#include <iostream>

using namespace std;

int main() {
    int arr[100];
    int size = 0;
    int choice;

    do {
        cout << "\n--- Array Operations Menu ---\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Display Array\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                if (size >= 100) {
                    cout << "Array is full!\n";
                    break;
                }
                int pos, val;
                cout << "Enter position to insert (0 to " << size << "): ";
                cin >> pos;
                
                if (pos < 0 || pos > size) {
                    cout << "Invalid position!\n";
                } else {
                    cout << "Enter value to insert: ";
                    cin >> val;
                    
                    for (int i = size; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = val;
                    size++;
                    cout << "Element inserted successfully!\n";
                }
                break;
            }
            case 2: {
                if (size == 0) {
                    cout << "Array is empty!\n";
                    break;
                }
                int pos;
                cout << "Enter position to delete (0 to " << size - 1 << "): ";
                cin >> pos;
                
                if (pos < 0 || pos >= size) {
                    cout << "Invalid position!\n";
                } else {
                    for (int i = pos; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    cout << "Element deleted successfully!\n";
                }
                break;
            }
            case 3: {
                if (size == 0) {
                    cout << "Array is empty.\n";
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << "\n";
                }
                break;
            }
            case 4: {
                if (size == 0) {
                    cout << "Array is empty.\n";
                    break;
                }
                int val;
                bool found = false;
                cout << "Enter element to search: ";
                cin >> val;
                
                for (int i = 0; i < size; i++) {
                    if (arr[i] == val) {
                        cout << "Element found at position " << i << ".\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Element not found.\n";
                }
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
