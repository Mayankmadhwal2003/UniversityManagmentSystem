#include "course.h"
#include <iostream>

Course::Course(const std::string& courseName, FacultyMember* instructor)
    : courseName(courseName), instructor(instructor) {}

std::string Course::getCourseName() const {
    return courseName;
}

void Course::setCourseName(const std::string& courseName) {
    this->courseName = courseName;
}

FacultyMember* Course::getInstructor() const {
    return instructor;
}

void Course::setInstructor(FacultyMember* instructor) {
    this->instructor = instructor;
}

void Course::enrollStudent(Student* student) {
    enrolledStudents.push_back(student);
    std::cout << student->getName() << " enrolled in course: " << courseName << std::endl;
}

void Course::listEnrolledStudents() const {
    std::cout << "Enrolled Students in " << courseName << ": ";
    for (const auto& student : enrolledStudents) {
        std::cout << student->getName() << " ";
    }
    std::cout << std::endl;
}

Course::~Course() {}
