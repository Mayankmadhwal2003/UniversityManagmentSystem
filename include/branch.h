#ifndef BRANCH_H
#define BRANCH_H

#include <vector>
#include <string>
#include "sections.h"
#include "faculty.h"

class Branch
{
protected:
    std ::vector<FacultyMember> faculty;
    std ::string headOfDepartment;
    std ::string name;
    std ::vector<Sections> sections;
    int studentCount;
    int facultyCount;
    int sections;
    const int sectionLimit;
    const int studentLimit;

public:
    Branch(const std ::string &headOfDepartment, const std ::string &name, int studentCount, int facultyCount, int sections, const int sectionLimit, const int studentLimit);

    std ::string getBranchName() const {};
    int getBranchStudentCount() const {};
    int getBranchFacultyCount() const {};
    int getBranchSectionCount() const {};
};

#endif