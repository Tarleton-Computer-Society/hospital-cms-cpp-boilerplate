#include "Doctor.h"

Doctor::Doctor(std::string name, std::string speciality, std::string contact_info) {
    this->name = name;
    this->speciality = speciality;
    this->contact_info = contact_info;
}

std::string Doctor::get_name() {
    return this->name;
}

std::string Doctor::get_speciality() {
    return this->speciality;
}

std::string Doctor::get_contact_info() {
    return this->contact_info;
}
