#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Ticket {
    int ticketId;
    string passengerName;
    string destination;
    int seatNumber;
    double price;
};

vector<Ticket> bookedTickets;

void bookTicket() {
    Ticket t;
    cout << "Enter Ticket ID: ";
    cin >> t.ticketId;
    cin.ignore();
    
    cout << "Enter Passenger Name: ";
    getline(cin, t.passengerName);
    
    cout << "Enter Destination: ";
    getline(cin, t.destination);
    
    cout << "Enter Seat Number: ";
    cin >> t.seatNumber;
    
    cout << "Enter Ticket Price: ";
    cin >> t.price;
    
    bookedTickets.push_back(t);
    cout << "Ticket booked successfully!\n";
}

void viewTickets() {
    if (bookedTickets.empty()) {
        cout << "No tickets booked yet.\n";
        return;
    }
    
    for (Ticket t : bookedTickets) {
        cout << "Ticket ID: " << t.ticketId << "\n";
        cout << "Passenger Name: " << t.passengerName << "\n";
        cout << "Destination: " << t.destination << "\n";
        cout << "Seat Number: " << t.seatNumber << "\n";
        cout << "Price: " << t.price << "\n\n";
    }
}

void searchTicket() {
    int searchId;
    cout << "Enter Ticket ID to search: ";
    cin >> searchId;
    
    for (Ticket t : bookedTickets) {
        if (t.ticketId == searchId) {
            cout << "Ticket found:\n";
            cout << "Passenger Name: " << t.passengerName << "\n";
            cout << "Destination: " << t.destination << "\n";
            cout << "Seat Number: " << t.seatNumber << "\n";
            cout << "Price: " << t.price << "\n";
            return;
        }
    }
    cout << "Ticket not found.\n";
}

void cancelTicket() {
    int cancelId;
    cout << "Enter Ticket ID to cancel: ";
    cin >> cancelId;
    
    for (int i = 0; i < bookedTickets.size(); i++) {
        if (bookedTickets[i].ticketId == cancelId) {
            bookedTickets.erase(bookedTickets.begin() + i);
            cout << "Ticket cancelled successfully!\n";
            return;
        }
    }
    cout << "Ticket not found.\n";
}

int main() {
    int choice;
    do {
        cout << "\n--- Ticket Booking System ---\n";
        cout << "1. Book Ticket\n";
        cout << "2. View All Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Cancel Ticket\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                bookTicket(); 
                break;
            case 2: 
                viewTickets(); 
                break;
            case 3: 
                searchTicket(); 
                break;
            case 4: 
                cancelTicket(); 
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
