#include "../include/branch.h"
#include <iostream>

Branch ::Branch(const std ::string &headOfDepartment, const std ::string &name, int studentcount, int facultyCount, int sections, const int sectionLimit, const int stdudentLimt) : headOfDepartment(headOfDepartment), name(name), studentCount(studentCount), facultyCount(facultyCount), sections(sections), sectionLimit(sectionLimit), studentLimit(studentLimit) {};

std ::string Branch ::getBranchName() const { return name; }

int Branch ::getBranchSectionCount() const { return this->sections; }

int Branch ::getBranchStudentCount() const { return studentCount; }

int Branch ::getBranchFacultyCount() const { return facultyCount; }