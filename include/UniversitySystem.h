#ifndef UNIVERSITY_SYSTEM_H
#define UNIVERSITY_SYSTEM_H

#include <vector>
#include "student.h"
#include "faculty.h"
#include "course.h"
#include "transaction.h"

class UniversitySystem {
private:
    std::vector<Student> students;
    std::vector<FacultyMember> facultyMembers;
    std::vector<Course> courses;
    std::vector<Transaction> transactions;

public:
    void addStudent(const Student& student);
    void addFacultyMember(const FacultyMember& facultyMember);
    void addCourse(const Course& course);
    void addTransaction(const Transaction& transaction);

    void viewStudentDetails(int studentId) const;
    void viewFacultyDetails(int facultyId) const;
    void viewCourseDetails(const std::string& courseName) const;

    // Additional functionality can be added here
};

#endif
