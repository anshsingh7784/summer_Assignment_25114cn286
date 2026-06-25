#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Marksheet {
    int rollNo;
    string name;
    float math;
    float physics;
    float chemistry;
    float english;
    float cs;
    float total;
    float percentage;
    char grade;
};

vector<Marksheet> records;

char calculateGrade(float percentage) {
    if (percentage >= 90) return 'A';
    if (percentage >= 80) return 'B';
    if (percentage >= 70) return 'C';
    if (percentage >= 60) return 'D';
    return 'F';
}

void addMarksheet() {
    Marksheet m;
    cout << "Enter Roll Number: ";
    cin >> m.rollNo;
    cin.ignore();
    
    cout << "Enter Student Name: ";
    getline(cin, m.name);
    
    cout << "Enter marks for Math (out of 100): ";
    cin >> m.math;
    cout << "Enter marks for Physics (out of 100): ";
    cin >> m.physics;
    cout << "Enter marks for Chemistry (out of 100): ";
    cin >> m.chemistry;
    cout << "Enter marks for English (out of 100): ";
    cin >> m.english;
    cout << "Enter marks for Computer Science (out of 100): ";
    cin >> m.cs;
    
    m.total = m.math + m.physics + m.chemistry + m.english + m.cs;
    m.percentage = m.total / 5.0;
    m.grade = calculateGrade(m.percentage);
    
    records.push_back(m);
    cout << "Marksheet generated successfully!\n";
}

void displayMarksheets() {
    if (records.empty()) {
        cout << "No records found.\n";
        return;
    }
    
    for (Marksheet m : records) {
        cout << "\n---------------------------------\n";
        cout << "Roll No: " << m.rollNo << "\n";
        cout << "Name: " << m.name << "\n";
        cout << "Math: " << m.math << " | Physics: " << m.physics << " | Chem: " << m.chemistry << "\n";
        cout << "English: " << m.english << " | CS: " << m.cs << "\n";
        cout << "---------------------------------\n";
        cout << "Total Marks: " << m.total << " / 500\n";
        cout << "Percentage: " << m.percentage << "%\n";
        cout << "Grade: " << m.grade << "\n";
        cout << "---------------------------------\n";
    }
}

void searchMarksheet() {
    int searchRoll;
    cout << "Enter Roll Number to search: ";
    cin >> searchRoll;
    for (Marksheet m : records) {
        if (m.rollNo == searchRoll) {
             cout << "\n---------------------------------\n";
        cout << "Roll No: " << m.rollNo << "\n";
        cout << "Name: " << m.name << "\n";
        cout << "Math: " << m.math << " | Physics: " << m.physics << " | Chem: " << m.chemistry << "\n";
        cout << "English: " << m.english << " | CS: " << m.cs << "\n";
        cout << "---------------------------------\n";
        cout << "Total Marks: " << m.total << " / 500\n";
        cout << "Percentage: " << m.percentage << "%\n";
        cout << "Grade: " << m.grade << "\n";
        cout << "---------------------------------\n";
            return;
        }
    }
    cout << "Marksheet not found.\n";
}

void deleteMarksheet() {
    int deleteRoll;
    cout << "Enter Roll Number to delete: ";
    cin >> deleteRoll;
    for (int i = 0; i < records.size(); i++) {
        if (records[i].rollNo == deleteRoll) {
            records.erase(records.begin() + i);
            cout << "Marksheet deleted successfully!\n";
            return;
        }
    }
    cout << "Marksheet not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Marksheet Generation System ---\n";
        cout << "1. Generate Marksheet\n";
        cout << "2. Display All Marksheets\n";
        cout << "3. Search Marksheet\n";
        cout << "4. Delete Marksheet\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                addMarksheet(); 
                break;
            case 2: 
                displayMarksheets(); 
                break;
            case 3: 
                searchMarksheet(); 
                break;
            case 4: 
                deleteMarksheet(); 
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