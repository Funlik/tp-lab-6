#ifndef LAB6_PERSONAL_H
#define LAB6_PERSONAL_H

#include "Employee.h"
#include "WorkTime.h"

class Personal: public Employee, protected WorkTime
{
protected:
    unsigned int base;
    unsigned int calculateWorkTimePayment();
public:
    Personal(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base);

    void setBase(unsigned int new_base);
    unsigned int getBase();

    void calculatePayment();
};

#endif //LAB6_PERSONAL_H
