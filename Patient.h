#ifndef PATIENT_H
#define PATIENT_H

#include <string>

class Patient {
public:
    Patient(std::string name, int age, std::string gender, std::string contact_info);
    std::string get_name();
    int get_age();
    std::string get_gender();
    std::string get_contact_info();

private:
    std::string name;
    int age;
    std::string gender;
    std::string contact_info;
};

#endif
