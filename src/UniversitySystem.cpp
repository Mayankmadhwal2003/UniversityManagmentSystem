#include "../include/UniversitySystem.h"
#include <iostream>

void UniversitySystem::addStudent(const Student &student)
{
    students.push_back(student);
}

void UniversitySystem::addFacultyMember(const FacultyMember &facultyMember, const Branch &branch)
{
    facultyMembers.push_back(facultyMember);
    branchFaculty[branch].push_back(facultyMember);
}

void UniversitySystem::addCourse(const Course &course)
{
    courses.push_back(course);
}

void UniversitySystem::addTransaction(const Transaction &transaction)
{
    transactions.push_back(transaction);
}

void UniversitySystem ::addSectionBranch(const Sections &section, const Branch &branch)
{
    branchSections[branch].push_back(section);
}

void UniversitySystem::removeStudent(const Student &student)
{

    for (auto it = students.begin(); it != students.end(); ++it)
    {
        if (it->getId() == student.getId())
        {
            students.erase(it);
            return;
        }
    }
    std::cout << "Student not found!" << std::endl;
}

void UniversitySystem::removeFacultyMember(const FacultyMember &member)
{
    for (auto it = facultyMembers.begin(); it != facultyMembers.end(); ++it)
    {
        if (it->getId() == member.getId())
        {
            facultyMembers.erase(it);
            return;
        }
    }
    std::cout << "Faculty member not found!" << std::endl;
}

void UniversitySystem::viewStudentDetails(int studentId) const
{
    for (const auto &student : students)
    {
        if (student.getId() == studentId)
        {
            student.viewDetails();
            return;
        }
    }
    std::cout << "Student not found!" << std::endl;
}

void UniversitySystem::viewFacultyDetails(int facultyId) const
{
    for (const auto &faculty : facultyMembers)
    {
        if (faculty.getId() == facultyId)
        {
            faculty.viewDetails();
            return;
        }
    }
    std::cout << "Faculty member not found!" << std::endl;
}

void UniversitySystem::viewCourseDetails(const std::string &courseName) const
{
    for (const auto &course : courses)
    {
        if (course.getCourseName() == courseName)
        {
            std::cout << "Course Name: " << course.getCourseName() << std::endl;
            std::cout << "Instructor: " << course.getInstructor()->getName() << std::endl;
            course.listEnrolledStudents();
            return;
        }
    }
    std::cout << "Course not found!" << std::endl;
}

// removal

void UniversitySystem ::removeBranch(const Branch &branch)
{
    for (auto it = branchSections.begin(); it != branchSections.end(); ++it)
    {
        if (it->first.getBranchName() == branch.getBranchName())
        {
            branchSections.erase(it);
            break;
        }
    }

    auto it = std ::find(branches.begin(), branches.end(), branch);
    if (it != branches.end())
    {
        branches.erase(it);
    }
}

void UniversitySystem::viewBranchFaculty(const Branch &branch) const
{
    for (auto &it : branchFaculty)
    {
        if (it.first.getBranchName() == branch.getBranchName())
        {
            std::cout << "Branch: " << it.first.getBranchName() << std::endl;
            std::cout << "Faculty Members:" << std::endl;
            for (const auto &faculty : it.second)
            {
                faculty.viewDetails();
            }
            return;
        }
    }
}