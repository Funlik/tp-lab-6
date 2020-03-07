//
// Created by Mikhail on 26.02.2020.
//
#include <iostream>
#include <Interfaces.h>

using std::string;
#ifndef TASK1_ABSTRACTCLASSES_H
#define TASK1_ABSTRACTCLASSES_H

class Employee {
public:
    Employee(int, string);
    virtual int getId() const;
    virtual void calcPayment() = 0;
    virtual string getFIO() const;
    void setTime(int);
    virtual double getPayment() const;


protected:
    int id, workTime;
    double payment;
    string FIO;
};

class Engineer : public WorkTime, public Project, public Employee  {
public:
    Engineer(int, string, int, double, string);
    virtual int calcWT() override;
    virtual double   calcProject() override;
    virtual void calcPayment() override;
protected:
    int rate;
    double contribution;
    string projectName;
};

class Personal : public WorkTime, public Employee {
public:
    Personal(int, string, int);
    virtual int calcWT() override;
    virtual void calcPayment() override;

protected:
    int rate;
};




#endif //TASK1_ABSTRACTCLASSES_H
