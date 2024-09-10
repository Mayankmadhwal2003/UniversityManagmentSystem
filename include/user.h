#ifndef USER_H
#define USER_H

#include <string>

class User
{
public:
    User(const std::string &name, int id, const std::string &contactInfo, const std ::string &branchName);
    virtual ~User();

    std::string getName() const;
    std::string getContact() const;
    int getId() const;
    virtual void viewDetails() const;
    std ::string getBranchName() const {};
    

protected:
    std::string name;
    int id;
    std::string contactInfo;
    std ::string branchName;
};

#endif // USER_H
