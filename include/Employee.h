#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>


class Employee {
protected:
    int id;
    std::string fio;
    int	worktime;
    double payment;
public:
    Employee(int id, std::string fio, int worktime) {
        this->id = id;
        this->fio = fio;
        this->worktime = worktime;
    }

    virtual void Calc() = 0;

    int ID() {
        return id;
    }

    std::string FIO() {
        return fio;
    }

    double PAYMENT() {
        return payment;
    }

};
