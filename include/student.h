#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>
#include "user.h"

class Student : public User {
private:
    std::vector<std::string> registeredCourses;
    double grade;
    double feeStatus;

public:
    Student(const std::string& name, int id, const std::string& contactInfo, double grade, double feeStatus);

    // Getter and Setter methods
    double getGrade() const;
    void setGrade(double grade);
    
    double getFeeStatus() const;
    void setFeeStatus(double feeStatus);

    void registerCourse(const std::string& course);
    void makePayment(double amount);
    void viewGrades() const;
    void viewDetails() const override;

    ~Student();
};

#endif
