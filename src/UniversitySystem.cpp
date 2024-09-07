#include "UniversitySystem.h"
#include <iostream>

void UniversitySystem::addStudent(const Student& student) {
    students.push_back(student);
}

void UniversitySystem::addFacultyMember(const FacultyMember& facultyMember) {
    facultyMembers.push_back(facultyMember);
}

void UniversitySystem::addCourse(const Course& course) {
    courses.push_back(course);
}

void UniversitySystem::addTransaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void UniversitySystem::viewStudentDetails(int studentId) const {
    for (const auto& student : students) {
        if (student.getId() == studentId) {
            student.viewDetails();
            return;
        }
    }
    std::cout << "Student not found!" << std::endl;
}

void UniversitySystem::viewFacultyDetails(int facultyId) const {
    for (const auto& faculty : facultyMembers) {
        if (faculty.getId() == facultyId) {
            faculty.viewDetails();
            return;
        }
    }
    std::cout << "Faculty member not found!" << std::endl;
}

void UniversitySystem::viewCourseDetails(const std::string& courseName) const {
    for (const auto& course : courses) {
        if (course.getCourseName() == courseName) {
            std::cout << "Course Name: " << course.getCourseName() << std::endl;
            std::cout << "Instructor: " << course.getInstructor()->getName() << std::endl;
            course.listEnrolledStudents();
            return;
        }
    }
    std::cout << "Course not found!" << std::endl;
}
