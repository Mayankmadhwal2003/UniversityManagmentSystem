#include "../include/student.h"
#include <iostream>
#include <algorithm>

Student::Student(const std::string &name, int id, const std::string &contactInfo, double grade, double feeStatus, const std ::string &branchName, const Sections &section)
    : User(name, id, contactInfo, branchName), grade(grade), feeStatus(feeStatus), section(section) {}

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

void Student ::coursesAssignedYear(int year)
{
    if (year < 1 || year > 4)
    {
        std ::cout << "year not applicable" << std ::endl;
        return;
    }
    std ::cout << "courses assigned for the year" << std ::endl;
    for (auto &it : yearCourse[year])
        std ::cout << it << " ";
    std ::cout << std ::endl;
}

void Student::registerCourse(const std::string &course, int year)
{
    auto it = std ::find(registeredCourses.begin(), registeredCourses.end(), course);
    if (it != registeredCourses.end())
    {
        std ::cout << "already registered" << std ::endl;
        return;
    }

    registeredCourses.push_back(course);
    yearCourse[year].push_back(course);
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

void Student ::gradePointAverage(int semester) const
{
    if (semester < 1 || semester > 8)
    {
        std ::cout << "not applicable" << std ::endl;
        return;
    }

    if (semGrade.find(semester) == semGrade.end())
    {
        std ::cout << "not yet updated" << std ::endl;
    }
    else
    {
        auto it = semGrade.find(semester);
        std ::cout << "the grade for " << semester << "is: " << it->second << std ::endl;
    }
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

void Student ::sectionAssigned() const
{
    std ::cout << "section assigned to" << this->getName() << " is" << section.getSectionName() << std ::endl;
}

Student::~Student()
{
}
