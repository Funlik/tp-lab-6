#pragma once //fix
#include "Employee.h"
using namespace std;

class Personal : public Employee, public WorkTime {
public:
    Personal(int id, string name, int worktime, int base);
    int CalcWorkTimePay();
    void CalculatePayment();
    int GetBase();
    void ChangeBase(int new_base);
protected:
    int base = 0;
};

class Cleaner : public Personal {
public:
    Cleaner(int id, string name, int worktime, int base);
};

class Driver : public Personal {
public:
    Driver(int id, string name, int worktime, int base);
};
