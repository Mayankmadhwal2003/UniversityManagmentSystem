#include "../include/user.h"
#include <iostream>

User ::User(const std ::string &name, int id, const std ::string &contactInfo, const std ::string &branchName)
    : name(name), id(id), contactInfo(contactInfo) {}

std ::string User ::getName() const { return this->name; }

std ::string User ::getContact() const { return this->contactInfo; }

std ::string User ::getBranchName() const { return this->branchName; }

int User ::getId() const { return this->id; }

void User::viewDetails() const
{
    std::cout << "Name: " << name << "\nID: " << id << "\nContact: " << contactInfo << std::endl;
}

User ::~User() {}
