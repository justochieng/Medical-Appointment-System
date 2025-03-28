#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>
#include <iostream>
using namespace std;

class Doctor {
protected:
    string name;
    string specialty;
public:
    Doctor(string n, string s);
    virtual void displayInfo() const;
};

#endif