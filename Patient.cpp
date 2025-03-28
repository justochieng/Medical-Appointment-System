#include "Patient.h"

Patient::Patient(string n, int a, string c) : name(n), age(a), contact(c) {}

void Patient::displayInfo() const {
    cout << "Patient Name: " << name << "\nAge: " << age << "\nContact: " << contact << "\n";
}