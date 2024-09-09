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
    int sectionCount;

public:
    Sections(const std ::string &sectionName, const std ::string &brancName, int sectionCount);
    void addStudent(const Student &s);
    void displayStudents() const;
    int getSectionCount() const;
    std ::string getSectionName() const;
};

#endif