#ifndef PATIENT_H
#define PATIENT_H
#include <string>
#include <iostream>
using namespace std;

class Patient {
private:
    string name;
    int age;
    string contact;
public:
    Patient(string n, int a, string c);
    void displayInfo() const;
};

#endif