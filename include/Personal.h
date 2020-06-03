//
// Created by ASUS on 22.02.2020.
//

#ifndef PAYMENT_PERSONAL_H
#define PAYMENT_PERSONAL_H

#include "WorkTime.h"
#include "Employee.h"
class Personal : public WorkTime, public Employee{
protected:
    int salaryForHour;
public:
    Personal(int _id, std::string _name, int _worktime, int _payment, int _salaryForHour) :
    salaryForHour(_salaryForHour), Employee(_id, _name, _worktime, _payment){}

    void setSalaryForHour(int _salaryForHour){
        salaryForHour = _salaryForHour;
    }

    int getSalaryForHour() const{
        return salaryForHour;
    }
    void calculatePaymentByTime() override{
        payment += salaryForHour * worktime;
    }
};

#endif //PAYMENT_PERSONAL_H
