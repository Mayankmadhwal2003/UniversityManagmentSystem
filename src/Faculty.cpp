#include "Faculty.h"
#include <algorithm> // For std::find

FacultyMember::FacultyMember(const std::string& name, int id, const std::string& contactInfo)
    : User(name, id, contactInfo) {}

std::vector<std::string> FacultyMember::getAssignedCourses() const {
    return assignedCourses;
}

void FacultyMember::setAssignedCourses(const std::vector<std::string>& courses) {
    assignedCourses = courses;
}

void FacultyMember::addCourse(const std::string& course) {
    assignedCourses.push_back(course);
    std::cout << name << " assigned to course: " << course << std::endl;
}

void FacultyMember::removeCourse(const std::string& course) {
    auto it = std::find(assignedCourses.begin(), assignedCourses.end(), course);
    if (it != assignedCourses.end()) {
        assignedCourses.erase(it);
        std::cout << name << " removed from course: " << course << std::endl;
    } else {
        std::cout << "Course not found in the list: " << course << std::endl;
    }
}

void FacultyMember::viewDetails() const {
    User::viewDetails();
    std::cout << "Assigned Courses: ";
    for (const auto& course : assignedCourses) {
        std::cout << course << " ";
    }
    std::cout << std::endl;
}

FacultyMember::~FacultyMember() {}
