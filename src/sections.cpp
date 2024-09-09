
#include <iostream>
#include "../include/sections.h"

Sections ::Sections(const std ::string &sectionName, const std ::string &brancName, int sectionCount) : sectionName(sectionName),
                                                                                                        branchname(branchname), sectionCount(sectionCount) {}

void Sections ::addStudent(const Student &s)
{
    if (s.getBranchName() != this->branchname)
    {
        std ::cout << "student does not belong to this branch" << std ::endl;
        return;
    }

    else
    {
        this->students.push_back(s);
    }
}

void Sections ::displayStudents() const
{
    if (students.empty())
    {
        std ::cout << "section is empty" << std ::endl;
        return;
    }
    else
    {
        std ::cout << "list of students in: " << sectionName << std ::endl;
        for (auto &it : students)

            std ::cout << std ::endl;
    }
}

std ::string Sections ::getSectionName() const { return this->sectionName; }

int Sections ::getSectionCount() const { return this->sectionCount; }