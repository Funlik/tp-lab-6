//
// Created by ASUS on 22.02.2020.
//

#ifndef PAYMENT_ENGINEER_H
#define PAYMENT_ENGINEER_H

#include "WorkTime.h"
#include "Employee.h"
#include "Project.h"

class Engineer : public WorkTime, public Employee, public Project{
protected:
    int salaryForHour;
    int percentByProject;
public:
    Engineer() = default;
    Engineer(int _id, std::string _name, int _worktime, int _payment, int _salaryForHour, int _percentByProject) :
        Employee(_id, _name, _worktime, _payment), salaryForHour(_salaryForHour), percentByProject(_percentByProject){}
    void calculatePaymentByTime() override{
        payment += salaryForHour * worktime;
    }
    void calculatePaymentByProjectPart(int projectValue) override{
        payment += 0.01 * percentByProject * projectValue;
    }

    void setSalaryForHour(int _salaryForHour){
        salaryForHour = _salaryForHour;
    }

    int getSalaryForHour() const{
        return salaryForHour;
    }

};

#endif //PAYMENT_ENGINEER_H
