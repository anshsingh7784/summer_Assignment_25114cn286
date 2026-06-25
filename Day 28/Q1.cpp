#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

vector<Book> library;

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();
    
    cout << "Enter Book Title: ";
    getline(cin, b.title);
    
    cout << "Enter Author Name: ";
    getline(cin, b.author);
    
    b.isIssued = false;
    library.push_back(b);
    cout << "Book added successfully!\n";
}

void displayBooks() {
    if (library.empty()) {
        cout << "No books found in the library.\n";
        return;
    }
    
    for (Book b : library) {
        cout << "ID: " << b.id << "\n";
        cout << "Title: " << b.title << "\n";
        cout << "Author: " << b.author << "\n";
        cout << "Status: ";
        if (b.isIssued) {
            cout << "Issued\n\n";
        } else {
            cout << "Available\n\n";
        }
    }
}

void searchBook() {
    int searchId;
    cout << "Enter Book ID to search: ";
    cin >> searchId;
    for (Book b : library) {
        if (b.id == searchId) {
            cout << "Record found:\n";
            cout << "Title: " << b.title << "\n";
            cout << "Author: " << b.author << "\n";
            cout << "Status: ";
            if (b.isIssued) {
                cout << "Issued\n";
            } else {
                cout << "Available\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void issueReturnBook() {
    int targetId;
    cout << "Enter Book ID to issue or return: ";
    cin >> targetId;
    for (int i = 0; i < library.size(); i++) {
        if (library[i].id == targetId) {
            library[i].isIssued = !library[i].isIssued;
            cout << "Book status updated to: ";
            if (library[i].isIssued) {
                cout << "Issued\n";
            } else {
                cout << "Available\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}

void deleteBook() {
    int deleteId;
    cout << "Enter Book ID to delete: ";
    cin >> deleteId;
    for (int i = 0; i < library.size(); i++) {
        if (library[i].id == deleteId) {
            library.erase(library.begin() + i);
            cout << "Book deleted successfully!\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue / Return Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addBook(); 
                break;
            case 2: 
                displayBooks(); 
                break;
            case 3: 
                searchBook(); 
                break;
            case 4: 
                issueReturnBook(); 
                break;
            case 5: 
                deleteBook(); 
                break;
            case 6: 
                cout << "Exiting...\n"; 
                break;
            default: 
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
