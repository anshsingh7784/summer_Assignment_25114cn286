#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

vector<Item> inventory;

void addItem() {
    Item newItem;
    cout << "Enter Item ID: ";
    cin >> newItem.id;
    cin.ignore();
    
    cout << "Enter Item Name: ";
    getline(cin, newItem.name);
    
    cout << "Enter Quantity: ";
    cin >> newItem.quantity;
    
    cout << "Enter Price: ";
    cin >> newItem.price;
    
    inventory.push_back(newItem);
    cout << "Item added successfully!\n";
}

void displayItems() {
    if (inventory.empty()) {
        cout << "Inventory is empty.\n";
        return;
    }
    
    for (Item item : inventory) {
        cout << "ID: " << item.id << "\n";
        cout << "Name: " << item.name << "\n";
        cout << "Quantity: " << item.quantity << "\n";
        cout << "Price: " << item.price << "\n\n";
    }
}

void searchItem() {
    int searchId;
    cout << "Enter Item ID to search: ";
    cin >> searchId;
    
    for (Item item : inventory) {
        if (item.id == searchId) {
            cout << "Item found:\n";
            cout << "Name: " << item.name << "\n";
            cout << "Quantity: " << item.quantity << "\n";
            cout << "Price: " << item.price << "\n";
            return;
        }
    }
    cout << "Item not found.\n";
}

void updateStock() {
    int targetId, addQty;
    cout << "Enter Item ID to update stock: ";
    cin >> targetId;
    
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].id == targetId) {
            cout << "Current Quantity: " << inventory[i].quantity << "\n";
            cout << "Enter quantity to add (use negative to reduce stock): ";
            cin >> addQty;
            if((addQty<0&&(abs(addQty))<=inventory[i].quantity)||addQty>0)
            {
            inventory[i].quantity += addQty;
            cout << "Stock updated! New Quantity: " << inventory[i].quantity << "\n";
            }
            else
            cout<<"Reduce stock quantity exceeded.\n";

            return;
        }
    }
    cout << "Item not found.\n";
}

void deleteItem() {
    int deleteId;
    cout << "Enter Item ID to delete: ";
    cin >> deleteId;
    
    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].id == deleteId) {
            inventory.erase(inventory.begin() + i);
            cout << "Item deleted successfully!\n";
            return;
        }
    }
    cout << "Item not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display All Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Stock\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addItem(); 
                break;
            case 2: 
                displayItems(); 
                break;
            case 3: 
                searchItem(); 
                break;
            case 4: 
                updateStock(); 
                break;
            case 5: 
                deleteItem(); 
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