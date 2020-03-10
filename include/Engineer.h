#ifndef UNTITLED1_ENGINEER_H
#define UNTITLED1_ENGINEER_H


#include "WorkTime.h"
#include "Employee.h"
#include "Project.h"

class Engineer: public WorkTime, public Employee, public Project {
private:
    std::string position = "Engineer";

public:
    explicit Engineer(int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    double payroll2(int projectBudget);
    double payroll();
    std::string getPosition();
};


#endif //UNTITLED1_ENGINEER_H
