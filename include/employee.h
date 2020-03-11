//
// Created by lacos on 26.02.2020.
//

#ifndef TASK1_EMPLOYEE_H
#define TASK1_EMPLOYEE_H

#include <string>
using namespace std;

class Employee
{
public:
    virtual int Calculate() = 0;

    Employee(string id, string name, string position)
    {
        this->_id = id;
        this->_name = name;
        this->_position = position;
    }

    int GetSalary()
    {
        return _payment;
    }

    string GetId()
    {
        return _id;
    }

    string GetName()
    {
        return _name;
    }

    string GetPosition()
    {
        return _position;
    }
protected:
    std::string _id;
    std::string _name;
    std::string _position;
    int _payment;
};
#endif //TASK1_EMPLOYEE_H
