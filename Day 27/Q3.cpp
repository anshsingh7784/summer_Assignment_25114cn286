#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct SalaryRecord {
    int empId;
    string name;
    double basicSalary;
    double hra;
    double da;
    double deductions;
    double netSalary;
};

vector<SalaryRecord> records;

void addRecord() {
    SalaryRecord r;
    cout << "Enter Employee ID: ";
    cin >> r.empId;
    cin.ignore();
    
    cout << "Enter Employee Name: ";
    getline(cin, r.name);
    
    cout << "Enter Basic Salary: ";
    cin >> r.basicSalary;
    
    cout << "Enter HRA (House Rent Allowance): ";
    cin >> r.hra;
    
    cout << "Enter DA (Dearness Allowance): ";
    cin >> r.da;
    
    cout << "Enter Deductions (Tax/PF): ";
    cin >> r.deductions;
    
    r.netSalary = r.basicSalary + r.hra + r.da - r.deductions;
    
    records.push_back(r);
    cout << "Salary record added successfully!\n";
}

void displayRecords() {
    if (records.empty()) {
        cout << "No records found.\n";
        return;
    }
    
    for (SalaryRecord r : records) {
        cout << "ID: " << r.empId << "\n";
        cout << "Name: " << r.name << "\n";
        cout << "Basic Salary: " << r.basicSalary << "\n";
        cout << "HRA: " << r.hra << "\n";
        cout << "DA: " << r.da << "\n";
        cout << "Deductions: " << r.deductions << "\n";
        cout << "Net Salary: " << r.netSalary << "\n\n";
    }
}

void searchRecord() {
    int searchId;
    cout << "Enter Employee ID to search: ";
    cin >> searchId;
    for (SalaryRecord r : records) {
        if (r.empId == searchId) {
            cout << "Record found:\n";
            cout << "Name: " << r.name << "\n";
            cout << "Basic Salary: " << r.basicSalary << "\n";
            cout << "Net Salary: " << r.netSalary << "\n";
            return;
        }
    }
    cout << "Record not found.\n";
}

void deleteRecord() {
    int deleteId;
    cout << "Enter Employee ID to delete: ";
    cin >> deleteId;
    for (int i = 0; i < records.size(); i++) {
        if (records[i].empId == deleteId) {
            records.erase(records.begin() + i);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Record not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Salary Management System ---\n";
        cout << "1. Add Salary Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Record\n";
        cout << "4. Delete Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addRecord(); 
                break;
            case 2: 
                displayRecords(); 
                break;
            case 3: 
                searchRecord(); 
                break;
            case 4: 
                deleteRecord(); 
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