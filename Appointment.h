#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include "Patient.h"
#include "Doctor.h"
#include <string>

class Appointment {
public:
    Appointment(Patient& patient, Doctor& doctor, std::string date, std::string time);
    Patient& get_patient();
    Doctor& get_doctor();
    std::string get_date();
    std::string get_time();

private:
    Patient& patient;
    Doctor& doctor;
    std::string date;
    std::string time;
};

#endif
