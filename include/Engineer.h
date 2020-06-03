#pragma once
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer : public Employee, public WorkTime, public Project{
    protected:
        int payment_base;
        double contribution; // вклад в проект
        std::string project_name; 
        int budget; // бюджет проекта
    public:
		Engineer(int id, std::string fio, int worktime, int payment_base, double contribution, std::string project_name, int budget);
		int WorkTimePayment();
		int ProjectPayment();
};