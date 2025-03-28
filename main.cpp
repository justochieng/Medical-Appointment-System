#include "System.h"
#include "Specialist.h"
#include <iostream>
using namespace std;

int main() {
    System system;

    Patient p1("Mwangi", 30, "123456789");
    Doctor d1("Dr. Mwongela", "General Medicine");
    Specialist s1("Dr. Ochieng", "Surgery", "Cardiology");

    system.bookAppointment(&p1, &d1, "2025-04-10");
    system.bookAppointment(&p1, &s1, "2025-04-12");
    
    cout << "\nCurrent Appointments:\n";
    system.showAppointments();

    system.cancelAppointment(0);
    
    cout << "\nAppointments after cancellation:\n";
    system.showAppointments();

    cout << "Press Enter to exit...";
    cin.get();

    return 0;
}