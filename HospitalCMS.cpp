#include "HospitalCMS.h"

void HospitalCMS::add_patient(Patient patient) {
    patients.push_back(patient);
}

void HospitalCMS::add_doctor(Doctor doctor) {
    doctors.push_back(doctor);
}

void HospitalCMS::add_appointment(Appointment appointment) {
    appointments.push_back(appointment);
}

void HospitalCMS::add_medical_record(MedicalRecord medical_record) {
    medical_records.push_back(medical_record);
}

std::vector<Patient> HospitalCMS::get_patients() {
    return patients;
}

std::vector<Doctor> HospitalCMS::get_doctors() {
    return doctors;
}

std::vector<Appointment> HospitalCMS::get_appointments() {
    return appointments;
}

std::vector<MedicalRecord> HospitalCMS::get_medical_records() {
    return medical_records;
}
