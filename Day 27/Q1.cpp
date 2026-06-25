#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    int rollNumber;
    string name;
    string course;
    float marks;
};

vector<Student> students;

void addStudent() {
    Student s;
    cout << "Enter Roll Number: ";
    cin >> s.rollNumber;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s.name);
    cout << "Enter Course: ";
    getline(cin, s.course);
    cout << "Enter Marks: ";
    cin >> s.marks;
    students.push_back(s);
    cout << "Student added successfully!\n";
}

void displayStudents() {
    if (students.empty()) {
        cout << "No records found.\n";
        return;
    }
    
    for (Student s : students) {
    cout << "Roll Number: "<<s.rollNumber<<"\n";
    cout << "Name: "<<s.name<<"\n";
    cout << "Course: "<<s.course<<"\n";
    cout << "Marks: "<<s.marks<<"\n";
  
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;
    for (Student s : students) {
        if (s.rollNumber == roll) {
            cout << "Record found:\n";
            cout << "Name: " << s.name << "\nCourse: " << s.course << "\nMarks: " << s.marks << "\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

void deleteStudent() {
    int roll;
    cout << "Enter Roll Number to delete: ";
    cin >> roll;
    for (int i=0;i<students.size();i++) {
        if (students[i].rollNumber == roll) {
            students.erase(students.begin()+i);
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Student Record Management ---\n";
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