#include "Patient.h"

Patient::Patient(std::string name, int age, std::string gender, std::string contact_info) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->contact_info = contact_info;
}

std::string Patient::get_name() {
    return this->name;
}

int Patient::get_age() {
    return this->age;
}

std::string Patient::get_gender() {
    return this->gender;
}

std::string Patient::get_contact_info() {
    return this->contact_info;
}
