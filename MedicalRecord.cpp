#include "MedicalRecord.h"

MedicalRecord::MedicalRecord(Patient patient, Doctor doctor, std::string diagnosis, std::string medication)
    : patient(patient), doctor(doctor), diagnosis(diagnosis), medication(medication) {}

Patient MedicalRecord::get_patient() {
    return patient;
}

Doctor MedicalRecord::get_doctor() {
    return doctor;
}

std::string MedicalRecord::get_diagnosis() {
    return diagnosis;
}

std::string MedicalRecord::get_medication() {
    return medication;
}
