#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
private:
    std::string type; // e.g., "Fee Payment", "Scholarship"
    double amount;

public:
    Transaction(const std::string& type, double amount);

    // Getter and Setter methods
    std::string getType() const;
    void setType(const std::string& type);
    
    double getAmount() const;
    void setAmount(double amount);

    void printTransaction() const;
};

#endif
