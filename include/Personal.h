#ifndef PERSONAL_H
#define PERSONAL_H

#include "Employee.h"
#include "IWorkTime.h"

class Personal: public Employee, public IWorkTime 
{
protected: 
    double worktime;
    double base;
    
public:
    Personal(int id, std::string name, double worktime, double base);
    ~Personal();
    double getBase();
    double getWorktime();
    void setBase(double base);
    void setWorktime(double worktime);
    double calculateWorkTimePayment();
    void calculatePayment();
};

#endif