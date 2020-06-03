#pragma once
#include <string>

class Employee {

public:
    Employee(std::string name, int id, int payment);
    ~Employee();
    int getId();
    std::string getName();
    void setId(int id);
    void setName(std::string name);
    int getPayment();
    void setPayment(int moneyPerHour);
    virtual int calcSalary() = 0;

protected:
    int payment;
    int id;
    std::string name;
};