#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>
#include "student.h"
#include "faculty.h"

class Course {
private:
    std::string courseName;
    FacultyMember* instructor;
    std::vector<Student*> enrolledStudents;

public:
    Course(const std::string& courseName, FacultyMember* instructor);

    // Getter and Setter methods
    std::string getCourseName() const;
    void setCourseName(const std::string& courseName);
    
    FacultyMember* getInstructor() const;
    void setInstructor(FacultyMember* instructor);

    void enrollStudent(Student* student);
    void listEnrolledStudents() const;

    ~Course();
};

#endif
