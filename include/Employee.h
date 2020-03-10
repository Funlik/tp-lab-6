#ifndef UNTITLED1_EMPLOYEE_H
#define UNTITLED1_EMPLOYEE_H

#include <string>

class Employee {
private:
    int id;
    std::string name;

protected:
    int worktime;
    double payment;

public:
    explicit Employee(int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    int getId();
    std::string getName();
    int getWorkTime();
};


#endif //UNTITLED1_EMPLOYEE_H
