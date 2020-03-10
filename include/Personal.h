#pragma once
#include <string>
#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
protected:
    int hourly_payment;
public:
    Personal(int, string, string, int);
    int calc_payment_by_worktime() override;
    void  calc_payment() override;

};


