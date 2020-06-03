#pragma once
#include <string>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    string occupation;
    int worktime;
    int payment;

public:
    Employee(int, string, string);
    virtual void calc_payment() = 0;

    int get_id() const;
    const string& get_name() const;
    const string& get_occupation() const;
    int get_worktime() const;
    int get_payment() const;

    void set_worktime(int new_worktime);
};

