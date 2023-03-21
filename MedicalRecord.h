#ifndef MEDICAL_RECORD_H
#define MEDICAL_RECORD_H

#include "Patient.h"
#include "Doctor.h"
#include <string>

class MedicalRecord {
private:
    Patient patient;
    Doctor doctor;
    std::string diagnosis;
    std::string medication;
public:
    MedicalRecord(Patient patient, Doctor doctor, std::string diagnosis, std::string medication);
    Patient get_patient();
    Doctor get_doctor();
    std::string get_diagnosis();
    std::string get_medication();
};

#endif 
