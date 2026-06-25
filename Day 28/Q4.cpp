#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Contact {
    string phone;
    string name;
    string email;
};

vector<Contact> contacts;

void addContact() {
    Contact c;
    cout << "Enter Phone Number: ";
    cin >> c.phone;
    
    cin.ignore();
    
    cout << "Enter Name: ";
    getline(cin, c.name);
    
    cout << "Enter Email: ";
    getline(cin, c.email);
    
    contacts.push_back(c);
    cout << "Contact added successfully!\n";
}

void displayContacts() {
    if (contacts.empty()) {
        cout << "No contacts found.\n";
        return;
    }
    
    for (Contact c : contacts) {
        cout << "Phone: " << c.phone << "\n";
        cout << "Name: " << c.name << "\n";
        cout << "Email: " << c.email << "\n\n";
    }
}

void searchContact() {
    string searchPhone;
    cout << "Enter Phone Number to search: ";
    cin >> searchPhone;
    
    for (Contact c : contacts) {
        if (c.phone == searchPhone) {
            cout << "Contact found:\n";
            cout << "Name: " << c.name << "\n";
            cout << "Email: " << c.email << "\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

void deleteContact() {
    string deletePhone;
    cout << "Enter Phone Number to delete: ";
    cin >> deletePhone;
    
    for (int i = 0; i < contacts.size(); i++) {
        if (contacts[i].phone == deletePhone) {
            contacts.erase(contacts.begin() + i);
            cout << "Contact deleted successfully!\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addContact(); 
                break;
            case 2: 
                displayContacts(); 
                break;
            case 3: 
                searchContact(); 
                break;
            case 4: 
                deleteContact(); 
                break;
            case 5: 
                cout << "Exiting...\n"; 
                break;
            default: 
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}