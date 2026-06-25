#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct BankAccount {
    long long accountNumber;
    string name;
    double balance;
};

vector<BankAccount> accounts;

void createAccount() {
    BankAccount acc;
    cout << "Enter Account Number: ";
    cin >> acc.accountNumber;
    cin.ignore(); 
    
    cout << "Enter Account Holder Name: ";
    getline(cin, acc.name);
    
    cout << "Enter Initial Balance: ";
    cin >> acc.balance;
    
    accounts.push_back(acc);
    cout << "Account created successfully!\n";
}

void depositMoney() {
    long long accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accNo) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            accounts[i].balance += amount;
            cout << "Deposit successful! New Balance: " << accounts[i].balance << "\n";
            return;
        }
    }
    cout << "Account not found.\n";
}

void withdrawMoney() {
    long long accNo;
    double amount;
    cout << "Enter Account Number: ";
    cin >> accNo;
    
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].accountNumber == accNo) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > accounts[i].balance) {
                cout << "Insufficient balance!\n";
            } else {
                accounts[i].balance -= amount;
                cout << "Withdrawal successful! New Balance: " << accounts[i].balance << "\n";
            }
            return;
        }
    }
    cout << "Account not found.\n";
}

void displayAccounts() {
    if (accounts.empty()) {
        cout << "No accounts found.\n";
        return;
    }
    
    for (BankAccount acc : accounts) {
        cout << "Account Number: " << acc.accountNumber << "\n";
        cout << "Name: " << acc.name << "\n";
        cout << "Balance: " << acc.balance << "\n\n";
    }
}

void searchAccount() {
    long long accNo;
    cout << "Enter Account Number to search: ";
    cin >> accNo;
    
    for (BankAccount acc : accounts) {
        if (acc.accountNumber == accNo) {
            cout << "Account found:\n";
            cout << "Name: " << acc.name << "\n";
            cout << "Balance: " << acc.balance << "\n";
            return;
        }
    }
    cout << "Account not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Bank Account System ---\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                createAccount(); 
                break;
            case 2: 
                depositMoney(); 
                break;
            case 3: 
                withdrawMoney(); 
                break;
            case 4: 
                displayAccounts(); 
                break;
            case 5: 
                searchAccount(); 
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
