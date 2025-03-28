#include "Specialist.h"
#include <iostream>
using namespace std;

Specialist::Specialist(string n, string s, string f) : Doctor(n, s), field(f) {}

void Specialist::displayInfo() const {
    cout << "Specialist Doctor: " << name << "\nSpecialty: " << specialty << "\nField: " << field << "\n";
}