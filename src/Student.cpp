#include "../include/student.h"
#include <iostream>

Student::Student(const std::string &name, int id, const std::string &contactInfo, double grade, double feeStatus)
    : User(name, id, contactInfo), grade(grade), feeStatus(feeStatus) {}

double Student::getGrade() const
{
    return grade;
}

void Student::setGrade(double grade)
{
    this->grade = grade;
}

double Student::getFeeStatus() const
{
    return feeStatus;
}

void Student::setFeeStatus(double feeStatus)
{
    this->feeStatus = feeStatus;
}

void Student::registerCourse(const std::string &course)
{
    registeredCourses.push_back(course);
    std::cout << name << " registered for course: " << course << std::endl;
}

void Student::makePayment(double amount)
{
    if (amount > feeStatus)
    {
        std::cout << "Payment exceeds outstanding fee amount!" << std::endl;
    }
    else
    {
        feeStatus -= amount;
        std::cout << name << " made a payment of " << amount << ". Remaining fee: " << feeStatus << std::endl;
    }
}

void Student::viewGrades() const
{
    std::cout << "Grade: " << grade << std::endl;
}

void Student::viewDetails() const
{
    User::viewDetails();
    std::cout << "Registered Courses: ";
    for (const auto &course : registeredCourses)
    {
        std::cout << course << " ";
    }
    std::cout << "\nGrade: " << grade << "\nFee Status: " << feeStatus << std::endl;
}

Student::~Student() {}
