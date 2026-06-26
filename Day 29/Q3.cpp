#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    string str1, str2, result;

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Find Length\n";
        cout << "2. Reverse String\n";
        cout << "3. Concatenate Two Strings\n";
        cout << "4. Compare Two Strings\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                cout << "Length of the string is: " << str1.length() << "\n";
                break;
            case 2:
                cout << "Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                result = "";
                for (int i = str1.length() - 1; i >= 0; i--) {
                    result += str1[i];
                }
                cout << "Reversed string: " << result << "\n";
                break;
            case 3:
                cout << "Enter first string: ";
                cin.ignore();
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                result = str1 + str2;
                cout << "Concatenated string: " << result << "\n";
                break;
            case 4:
                cout << "Enter first string: ";
                cin.ignore();
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                if (str1 == str2) {
                    cout << "Strings are equal.\n";
                } else {
                    cout << "Strings are not equal.\n";
                }
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