//
// Created by Mary on 25.02.2020.
//
#include <string>
#include <iostream>

#ifndef TASK1_EMPLOYEE_H
#define TASK1_EMPLOYEE_H
enum Projects{
    first = 100000,
    second = 150000,
    third = 125000,
    fourth = 150000,
    zero = 0
};
class Employee{
protected:
    std::string id;
    std::string name;
    int worktime;
    double payment;
public:
    Employee(std::string id, std::string name){
        this->id = id;
        this->name = name;
    }
    void setWorktime(int worktime){
        this->worktime = worktime;
    }

    double getPayment(){
        return this->payment;
    }
    virtual void calc() = 0;

    virtual void print() = 0;
};
#endif //TASK1_EMPLOYEE_H
