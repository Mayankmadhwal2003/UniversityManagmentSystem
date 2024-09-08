#include "../include/administrator.h"

Administrator::Administrator(const std::string &name, int id, const std::string &contactInfo)
    : User(name, id, contactInfo) {}

void Administrator::manageStudent(Student &student)
{
    // Example management functionality
    student.viewDetails();
}

void Administrator::manageFaculty(FacultyMember &faculty)
{
    // Example management functionality
    faculty.viewDetails();
}

void Administrator::viewDetails() const
{
    User::viewDetails();
    // You can add additional details specific to Administrator here
}

Administrator::~Administrator() {}
