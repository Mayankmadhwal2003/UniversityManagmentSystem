#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "user.h"
#include <vector>
#include "student.h"
#include "faculty.h"

class Administrator : public User {
public:
    Administrator(const std::string& name, int id, const std::string& contactInfo);

    void manageStudent(Student& student);
    void manageFaculty(FacultyMember& faculty);
    void viewDetails() const override;

    ~Administrator();
};

#endif
