#include <iostream>
#include <string>

using namespace std;

struct Booking {
    int roomNumber;
    string guestName;
    string roomType;
    int days;
    double bill;
};

Booking hotel[100];
int totalBookings = 0;

void bookRoom() {
    if (totalBookings >= 100) {
        cout << "Hotel is fully booked.\n";
        return;
    }

    cout << "Enter Room Number: ";
    cin >> hotel[totalBookings].roomNumber;
    cin.ignore();

    cout << "Enter Guest Name: ";
    getline(cin, hotel[totalBookings].guestName);

    cout << "Enter Room Type (Standard/Deluxe/Suite): ";
    getline(cin, hotel[totalBookings].roomType);

    cout << "Enter Number of Days: ";
    cin >> hotel[totalBookings].days;

    double rate = 0;
    if (hotel[totalBookings].roomType == "Standard" || hotel[totalBookings].roomType == "standard") {
        rate = 1000.0;
    } else if (hotel[totalBookings].roomType == "Deluxe" || hotel[totalBookings].roomType == "deluxe") {
        rate = 2000.0;
    } else {
        rate = 3500.0; 
    }

    hotel[totalBookings].bill = rate * hotel[totalBookings].days;
    totalBookings++;
    cout << "Room booked successfully!\n";
}

void displayBookings() {
    if (totalBookings == 0) {
        cout << "No current bookings.\n";
        return;
    }

    for (int i = 0; i < totalBookings; i++) {
        cout << "Room: " << hotel[i].roomNumber << "\n";
        cout << "Guest: " << hotel[i].guestName << "\n";
        cout << "Type: " << hotel[i].roomType << "\n";
        cout << "Days: " << hotel[i].days << "\n";
        cout << "Total Bill: ₹" << hotel[i].bill << "\n\n";
    }
}

void searchBooking() {
    int searchRoom;
    cout << "Enter Room Number to search: ";
    cin >> searchRoom;

    for (int i = 0; i < totalBookings; i++) {
        if (hotel[i].roomNumber == searchRoom) {
            cout << "Booking Found:\n";
            cout << "Guest: " << hotel[i].guestName << "\n";
            cout << "Type: " << hotel[i].roomType << "\n";
            cout << "Days: " << hotel[i].days << "\n";
            cout << "Total Bill: ₹" << hotel[i].bill << "\n";
            return;
        }
    }
    cout << "Room not found or not booked.\n";
}

void checkout() {
    int checkoutRoom;
    cout << "Enter Room Number to checkout: ";
    cin >> checkoutRoom;

    for (int i = 0; i < totalBookings; i++) {
        if (hotel[i].roomNumber == checkoutRoom) {
            cout << "Checking out " << hotel[i].guestName << ".\n";
            cout << "Please collect the payment of ₹" << hotel[i].bill << "\n";
            
            for (int j = i; j < totalBookings - 1; j++) {
                hotel[j] = hotel[j + 1];
            }
            totalBookings--;
            cout << "Checkout complete. Room is now available!\n";
            return;
        }
    }
    cout << "Room not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Hotel Room Booking System ---\n";
        cout << "1. Book Room\n";
        cout << "2. Display Bookings\n";
        cout << "3. Search Booking\n";
        cout << "4. Checkout / Vacate Room\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                bookRoom(); 
                break;
            case 2: 
                displayBookings(); 
                break;
            case 3: 
                searchBooking(); 
                break;
            case 4: 
                checkout(); 
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