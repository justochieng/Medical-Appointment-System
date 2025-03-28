#include "Doctor.h"

Doctor::Doctor(string n, string s) : name(n), specialty(s) {}

void Doctor::displayInfo() const {
    cout << "Doctor: " << name << "\nSpecialty: " << specialty << "\n";
}