#include <iostream>
#include <string>

using namespace std;

struct Student {
    int rollNumber;
    string name;
    string course;
    float marks;
};

Student students[100];
int studentCount = 0;

void addStudent() {
    if (studentCount >= 100) {
        cout << "System is full. Cannot add more students.\n";
        return;
    }
    
    cout << "Enter Roll Number: ";
    cin >> students[studentCount].rollNumber;
    cin.ignore();
    
    cout << "Enter Name: ";
    getline(cin, students[studentCount].name);
    
    cout << "Enter Course: ";
    getline(cin, students[studentCount].course);
    
    cout << "Enter Marks: ";
    cin >> students[studentCount].marks;
    
    studentCount++;
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (studentCount == 0) {
        cout << "No records found.\n";
        return;
    }
    
    for (int i = 0; i < studentCount; i++) {
        cout << "Roll Number: " << students[i].rollNumber << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Course: " << students[i].course << "\n";
        cout << "Marks: " << students[i].marks << "\n\n";
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;
    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == roll) {
            cout << "Record found:\n";
            cout << "Name: " << students[i].name << "\n";
            cout << "Course: " << students[i].course << "\n";
            cout << "Marks: " << students[i].marks << "\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter Roll Number to delete: ";
    cin >> roll;
    
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNumber == roll) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Student Record System (Array Based) ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Delete Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addStudent(); 
                break;
            case 2: 
                displayStudents(); 
                break;
            case 3: 
                searchStudent(); 
                break;
            case 4: 
                deleteStudent(); 
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