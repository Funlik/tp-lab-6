#pragma once

#include <Interfaces/WorkTime.h>
#include "Employee.h"

class Personal :
        public Employee, public WorkTime {
public:
    ~Personal();
    int getWorkTime();
    void setWorkTime(int workTime);
protected:
    Personal(std::string name, int id, int payment, int workTime);
    int workTime;
};