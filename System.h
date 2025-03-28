#ifndef SYSTEM_H
#define SYSTEM_H
#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include <vector>
using namespace std;

class System {
private:
    vector<Appointment*> appointments;
public:
    void bookAppointment(Patient* p, Doctor* d, string date);
    void cancelAppointment(int index);
    void showAppointments() const;
    ~System();
};

#endif