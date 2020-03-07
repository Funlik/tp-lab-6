//
// Created by Илья on 019 19.02.20.
//

#ifndef TASK1_EMPLOYEE_H
#define TASK1_EMPLOYEE_H

#include <string>

using std::string;

class Employee{
protected:
    int id;
    string fio;
    int worktime;
    int payment;
    string spec;
public:
    Employee(int id, string fio, int worktime, string spec) {
        this->id = id;
        this->fio = fio;
        this->worktime = worktime;
        this->payment = 0;
        this->spec = spec;
    }
    virtual void calc()=0;
    int getId(){
        return id;
    }
    string getFio(){
        return fio;
    }
    int getWorktime(){
        return worktime;
    }
    int getPayment(){
        return payment;
    }
    string getSpec(){
        return spec;
    }
};

#endif //TASK1_EMPLOYEE_H
