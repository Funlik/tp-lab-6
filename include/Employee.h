//
// Created by aklen on 05.03.2020.
//
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee{
protected:
    int id, workTime;
    double payment;
    string name;
public:
    Employee(int, string, int);//id, name, workTime
    int getId();
    virtual void setPayment() = 0;
    string getFio();
    double getPayment();
};
#endif