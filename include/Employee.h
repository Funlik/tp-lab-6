#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
protected:
    int id;
    std::string name;
    double worktime;
    double payment;

public:
    Employee(int id, std::string name);
    Employee(int id, std::string name, double worktime);
    ~Employee();

    int getId();
    std::string getName();
    double getWorktime();
    double getPayment();

    void setID(int id);
    void setName(std::string name);
    void setWorktime(double worktime);
    void setPayment(double payment);

};

#endif