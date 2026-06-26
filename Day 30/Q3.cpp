#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

vector<Employee> company;

void addEmployee() {
    Employee emp;
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cin.ignore();
    
    cout << "Enter Employee Name: ";
    getline(cin, emp.name);
    
    cout << "Enter Department: ";
    getline(cin, emp.department);
    
    cout << "Enter Salary: ";
    cin >> emp.salary;
    
    company.push_back(emp);
    cout << "Employee added successfully!\n";
}

void viewEmployees() {
    if (company.empty()) {
        cout << "No employees found.\n";
        return;
    }
    
    for (int i = 0; i < company.size(); i++) {
        cout << "ID: " << company[i].id 
             << " | Name: " << company[i].name 
             << " | Dept: " << company[i].department 
             << " | Salary: $" << company[i].salary << "\n";
    }
}

void searchEmployee() {
    int searchId;
    cout << "Enter Employee ID to search: ";
    cin >> searchId;
    
    for (int i = 0; i < company.size(); i++) {
        if (company[i].id == searchId) {
            cout << "Employee found:\n";
            cout << "Name: " << company[i].name << "\n";
            cout << "Department: " << company[i].department << "\n";
            cout << "Salary: $" << company[i].salary << "\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

void deleteEmployee() {
    int deleteId;
    cout << "Enter Employee ID to delete: ";
    cin >> deleteId;
    
    for (int i = 0; i < company.size(); i++) {
        if (company[i].id == deleteId) {
            company.erase(company.begin() + i);
            cout << "Employee record deleted successfully!\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Mini Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. View All Employees\n";
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
                viewEmployees(); 
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