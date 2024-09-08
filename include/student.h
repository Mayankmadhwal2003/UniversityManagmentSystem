#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
#include "sections.h"
#include "user.h"
#include <map>

class Student : public User
{
private:
    std::vector<std::string> registeredCourses;
    double grade;
    double feeStatus;
    std ::map<int, std ::vector<std ::string>> yearCourse;
    std ::map<int, double> semGrade;
    Sections section;

public:
    Student(const std::string &name, int id, const std::string &contactInfo, double grade, double feeStatus, const std ::string &branchName, const Sections &section);

    // Getter and Setter methods
    double getGrade() const;
    void setGrade(double grade);

    double getFeeStatus() const;
    void setFeeStatus(double feeStatus);

    void coursesAssignedYear(int year);
    void registerCourse(const std::string &course, int year);
    void makePayment(double amount);
    void gradePointAverage(int semester) const;
    void viewGrades() const;
    void viewDetails() const override;
    void sectionAssigned() const;

    ~Student();
};

#endif
