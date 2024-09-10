#ifndef UNIVERSITY_SYSTEM_H
#define UNIVERSITY_SYSTEM_H

#include <map>
#include <vector>
#include "student.h"
#include "faculty.h"
#include "course.h"
#include "transaction.h"
#include "branch.h"
#include "sections.h"
#include <algorithm>

class UniversitySystem
{
private:
    std::vector<Student> students;
    std::vector<FacultyMember> facultyMembers;
    std::vector<Course> courses;
    std::vector<Transaction> transactions;
    std::vector<Branch> branches;
    std::map<Branch, std::vector<Sections>> branchSections;
    std::map<Branch, std::vector<FacultyMember>> branchFaculty;

public:
    // add
    void addStudent(const Student &student);
    void addFacultyMember(const FacultyMember &facultyMember, const Branch &branch);
    void addCourse(const Course &course);
    void addTransaction(const Transaction &transaction);
    void addSectionBranch(const Sections &section, const Branch &branch);

    // remove
    void removeStudent(const Student &s);
    void removeFacultyMember(const FacultyMember &facultyMember);
    void removeBranch(const Branch &branch);
    void removeSection(const Sections &section);

    void viewStudentDetails(int studentId) const;
    void viewFacultyDetails(int facultyId) const;
    void viewCourseDetails(const std::string &courseName) const;
    void viewBranchSections(const Branch &branch) const;
    void viewBranchFaculty(const Branch &branch) const;

    // Additional functionality can be added here
};

#endif
