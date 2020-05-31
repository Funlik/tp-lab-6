//
// Created by Илья Соловьёв on 19.02.2020.
//

#ifndef TASK1_GENERAL_H
#define TASK1_GENERAL_H

#include <iostream>

////////////
//EMPLOYEE//
////////////

class Employee {
protected:
    int id;
    std::string name;
    int workDays;
    double payment;
public:
    Employee();

    Employee(int id, std::string name, int workDays);

    virtual void setPayment() = 0;

    double getPayment();

    int getId();

    std::string getName();

    std::string getWritingOut();
};

#endif //TASK1_GENERAL_H
