#include "../include/transaction.h"
#include <iostream>

Transaction::Transaction(const std::string &type, double amount)
    : type(type), amount(amount) {}

std::string Transaction::getType() const
{
    return type;
}

void Transaction::setType(const std::string &type)
{
    this->type = type;
}

double Transaction::getAmount() const
{
    return amount;
}

void Transaction::setAmount(double amount)
{
    this->amount = amount;
}

void Transaction::printTransaction() const
{
    std::cout << "Transaction Type: " << type << "\nAmount: " << amount << std::endl;
}
