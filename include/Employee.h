#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include <string>

class Employee
{
protected:
    unsigned int id;
    std::string name;
    unsigned int worktime;
    unsigned int payment;

public:
    Employee(unsigned int new_id, std::string new_name, unsigned int new_worktime);

    void setID(unsigned int new_id);
    unsigned int getID();
    void setName(std::string new_name);
    std::string getName();
    void setWorkTime(unsigned int new_worktime);
    unsigned int getWorkTime();
    void setPayment(unsigned int new_payment);
    unsigned int getPayment();

    void virtual calculatePayment() = 0;
};

#endif //LAB6_EMPLOYEE_H
