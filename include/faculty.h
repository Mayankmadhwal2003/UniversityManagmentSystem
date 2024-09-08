#ifndef FACULTY_H
#define FACULTY_H

#include <vector>
#include <string>
#include "user.h"

class FacultyMember : public User
{
private:
    std::vector<std::string> assignedCourses;

public:
    // Constructor
    FacultyMember(const std::string &name, int id, const std::string &contactInfo);

    // Getter and Setter methods
    std::vector<std::string> getAssignedCourses() const;
    void setAssignedCourses(const std::vector<std::string> &courses);

    void addCourse(const std::string &course);
    void removeCourse(const std::string &course);

    // Overridden method
    void viewDetails() const override;

    // Destructor
    ~FacultyMember();
};

#endif
