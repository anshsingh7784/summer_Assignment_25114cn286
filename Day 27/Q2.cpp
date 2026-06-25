#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string designation;
    double salary;
};

vector<Employee> employees;

void addEmployee() {
    Employee e;
    cout << "Enter Employee ID: ";
    cin >> e.id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, e.name);
    cout << "Enter Designation: ";
    getline(cin, e.designation);
    cout << "Enter Salary: ";
    cin >> e.salary;
    employees.push_back(e);
    cout << "Employee added successfully!\n";
}

void displayEmployees() {
    if (employees.empty()) {
        cout << "No records found.\n";
        return;
    }
    
    for (Employee e : employees) {
        cout << "ID: " << e.id << "\n";
        cout << "Name: " << e.name << "\n";
        cout << "Designation: " << e.designation << "\n";
        cout << "Salary: " << e.salary << "\n\n";
    }
}

void searchEmployee() {
    int searchId;
    cout << "Enter Employee ID to search: ";
    cin >> searchId;
    for (Employee e : employees) {
        if (e.id == searchId) {
            cout << "Record found:\n";
            cout << "Name: " << e.name << "\nDesignation: " << e.designation << "\nSalary: " << e.salary << "\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void deleteEmployee() {
    int deleteId;
    cout << "Enter Employee ID to delete: ";
    cin >> deleteId;
    for (int i = 0; i < employees.size(); i++) {
        if (employees[i].id == deleteId) {
            employees.erase(employees.begin() + i);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addEmployee(); 
                break;
            case 2: 
                displayEmployees(); 
                break;
            case 3: 
                searchEmployee(); 
                break;
            case 4: 
                deleteEmployee(); 
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