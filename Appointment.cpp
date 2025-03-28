#include "Appointment.h"
#include <iostream>
using namespace std;

Appointment::Appointment(Patient* p, Doctor* d, string dt) : patient(p), doctor(d), date(dt) {}

void Appointment::displayAppointment() const {
    cout << "Appointment Details:\n";
    patient->displayInfo();
    doctor->displayInfo();
    cout << "Date: " << date << "\n";
}