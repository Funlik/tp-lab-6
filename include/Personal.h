//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_PERSONAL_H
#define LAB6_PERSONAL_H

#include <string>
#include "WorkTime.h"
#include "Employee.h"

using namespace std;

class Personal : public Employee, public WorkTime {
private:
    double base;

    double get_payment_according_h_worked() final;

public:
    Personal(const string &spec, int id, const string &name, double work_time, double _base) : Employee(spec, id, name,
                                                                                                        work_time) {
        base = _base;
    };

    void get_salary() final;
};

class Cleaner : public Personal {
public:
    using Personal::Personal;
};

class Driver : public Personal {
public:
    using Personal::Personal;
};

#endif //LAB6_PERSONAL_H
