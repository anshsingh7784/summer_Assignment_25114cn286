#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isAvailable;
};

vector<Book> library;

void addBook() {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();
    
    cout << "Enter Title: ";
    getline(cin, b.title);
    
    cout << "Enter Author: ";
    getline(cin, b.author);
    
    b.isAvailable = true;
    library.push_back(b);
    cout << "Book added successfully!\n";
}

void viewBooks() {
    if (library.empty()) {
        cout << "Library is empty.\n";
        return;
    }
    
    for (int i = 0; i < library.size(); i++) {
        cout << "ID: " << library[i].id 
             << " | Title: " << library[i].title 
             << " | Author: " << library[i].author 
             << " | Status: " << (library[i].isAvailable ? "Available" : "Issued") << "\n";
    }
}

void issueReturnBook() {
    int searchId;
    cout << "Enter Book ID to issue or return: ";
    cin >> searchId;
    
    for (int i = 0; i < library.size(); i++) {
        if (library[i].id == searchId) {
            library[i].isAvailable = !library[i].isAvailable;
            cout << "Success! Book is now: " << (library[i].isAvailable ? "Available" : "Issued") << "\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Mini Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. View All Books\n";
        cout << "3. Issue / Return Book\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addBook(); 
                break;
            case 2: 
                viewBooks(); 
                break;
            case 3: 
                issueReturnBook(); 
                break;
            case 4: 
                cout << "Exiting...\n"; 
                break;
            default: 
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
