#include "System.h"
#include <iostream>
using namespace std;

void System::bookAppointment(Patient* p, Doctor* d, string date) {
    appointments.push_back(new Appointment(p, d, date));
    cout << "Appointment booked successfully.\n";
}

void System::cancelAppointment(int index) {
    if (index < 0 || index >= appointments.size()) {
        cout << "Invalid index.\n";
        return;
    }
    delete appointments[index];
    appointments.erase(appointments.begin() + index);
    cout << "Appointment canceled.\n";
}

void System::showAppointments() const {
    if (appointments.empty()) {
        cout << "No appointments available.\n";
        return;
    }
    for (size_t i = 0; i < appointments.size(); ++i) {
        cout << "Appointment " << i + 1 << ":\n";
        appointments[i]->displayAppointment();
        cout << "--------------------------\n";
    }
}

System::~System() {
    for (auto app : appointments) {
        delete app;
    }
}