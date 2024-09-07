#ifndef USER_H 
#define USER_H

#include<iostream>


class User{
    protected:
    std :: string name;
    int id;
    std :: string contactInfo;

    public : 
    User(const std :: string &name, int id, const std :: string &contactInfo) 
        : name(name), id(id), contactInfo(contactInfo) {}
    
    std :: string getName() const {};

    std :: string getContact () const {};

    int getId() const{};

    virtual void viewDetails() const{};

    virtual ~User(){};

};

#endif