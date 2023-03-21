#include "Appointment.h"

Appointment::Appointment(Patient& patient, Doctor& doctor, std::string date, std::string time)
    : patient(patient), doctor(doctor), date(date), time(time) {}

Patient& Appointment::get_patient() {
    return this->patient;
}

Doctor& Appointment::get_doctor() {
    return this->doctor;
}

std::string Appointment::get_date() {
    return this->date;
}

std::string Appointment::get_time() {
    return this->time;
}
