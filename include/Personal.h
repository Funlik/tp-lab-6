#ifndef UNTITLED1_PERSONAL_H
#define UNTITLED1_PERSONAL_H


#include "Employee.h"
#include "WorkTime.h"

class Personal: public Employee, public WorkTime {
public:
    explicit Personal (int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    double payroll() final;
};


#endif //UNTITLED1_PERSONAL_H
