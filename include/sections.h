#ifndef SECTIONS_H
#define SECTIONS_H

#include <vector>
#include <string>
#include "student.h"

class Sections
{
private:
    std ::string sectionName;
    std ::vector<Student> students;
    std ::string branchname;

public:
    Sections(const std ::string &sectionName, const std ::string &brancName);
    void addStudent(const Student &s) {};
    void displayStudents() const {};
};

#endif