#ifndef SPECIALIST_H
#define SPECIALIST_H
#include "Doctor.h"

class Specialist : public Doctor {
private:
    string field;
public:
    Specialist(string n, string s, string f);
    void displayInfo() const override;
};

#endif