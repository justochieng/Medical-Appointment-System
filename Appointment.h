#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include "Patient.h"
#include "Doctor.h"

class Appointment {
private:
    Patient* patient;
    Doctor* doctor;
    string date;
public:
    Appointment(Patient* p, Doctor* d, string dt);
    void displayAppointment() const;
};

#endif