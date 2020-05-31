//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_EMPLOYEE_H
#define LAB6_EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
protected:
    int id;
protected:
    string speciality;
    string name;
    double work_time = 0;
    double payment = 0;
public:
    Employee(const string &spec, int _id, const string &_name, double _work_time) {
        speciality = spec;
        id = _id;
        name = _name;
        work_time = _work_time;
    }

    int get_id() const;

    const string &get_speciality() const;

    const double &get_work_time() const;

    const double &get_current_payment() const;

    void set_work_time(double _work_time);

    virtual void get_salary() {
        set_work_time(0);
        payment = 1;
    };

    string get_name() { return name; };
};


#endif //LAB6_EMPLOYEE_H
