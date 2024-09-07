#include "User.h"

User ::User(const std ::string &name, int id, const std ::string &contactInfo)
    : name(name), id(id), contactInfo(contactInfo) {}

std ::string User ::getName() const { return this->name; }

std ::string User ::getContact() const { return this->contactInfo; }

int User ::getId() const { return this->id; }

void User::viewDetails() const
{
    std::cout << "Name: " << name << "\nID: " << id << "\nContact: " << contactInfo << std::endl;
}

User ::~User() {}
