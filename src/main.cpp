#include <iostream>
#include "../include/student.h"
#include "../include/faculty.h"
#include "../include/course.h"
#include "../include/transaction.h"
#include "../include/UNiversitySystem.h"

int main()
{
    // Create some users
    Student student1("Alice", 1, "alice@example.com", 90.0, 1000.0);
    FacultyMember faculty1("Dr. Smith", 101, "smith@example.com");
    Course course1("Intro to Programming", &faculty1);
    Transaction transaction1("Fee Payment", 500.0);

    // Create university system
    UniversitySystem system;

    // Add entities to the system
    system.addStudent(student1);
    system.addFacultyMember(faculty1);
    system.addCourse(course1);
    system.addTransaction(transaction1);

    // Perform operations
    system.viewStudentDetails(1);
    system.viewFacultyDetails(101);
    system.viewCourseDetails("Intro to Programming");

    return 0;
}
