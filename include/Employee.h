//
// Created by artem on 10.03.2020.
//

#pragma once

#include <string>
#include <fstream>


class Employee {

protected:

    int id;
    std::string name;
    int worktime;
    int payment;

public:

    Employee(int id, std::string name, int worktime, int payment);

    ~Employee();

    int getId();

    void setId(int id);

    std::string getName();

    void setName(const std::string &name);

    int getWorktime();

    void setWorktime(int worktime);

    int getPayment();

    void setPayment(int payment);

    virtual int getSalary() = 0;
};


