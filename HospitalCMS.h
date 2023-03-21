#ifndef HOSPITAL_CMS_H
#define HOSPITAL_CMS_H

#include "Patient.h"
#include "Doctor.h"
#include "Appointment.h"
#include "MedicalRecord.h"
#include <vector>

class HospitalCMS {
private:
    std::vector<Patient> patients;
    std::vector<Doctor> doctors;
    std::vector<Appointment> appointments;
    std::vector<MedicalRecord> medical_records;
public:
    void add_patient(Patient patient);
    void add_doctor(Doctor doctor);
    void add_appointment(Appointment appointment);
    void add_medical_record(MedicalRecord medical_record);
    std::vector<Patient> get_patients();
    std::vector<Doctor> get_doctors();
    std::vector<Appointment> get_appointments();
    std::vector<MedicalRecord> get_medical_records();
};

#endif 
