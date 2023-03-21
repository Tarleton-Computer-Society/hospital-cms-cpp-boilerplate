#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>

class Doctor {
public:
    Doctor(std::string name, std::string speciality, std::string contact_info);
    std::string get_name();
    std::string get_speciality();
    std::string get_contact_info();

private:
    std::string name;
    std::string speciality;
    std::string contact_info;
};

#endif
