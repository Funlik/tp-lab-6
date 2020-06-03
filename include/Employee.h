//
// Created by Ilya Doroshenko on 22.02.2020.
//

#ifndef PAYMENT_EMPLOYEE_H
#define PAYMENT_EMPLOYEE_H
#include <string>

class Employee{
protected:
    int id;
    std::string name;
    int worktime;
    double payment;
public:
    Employee() = default;
    Employee(int _id, std::string& _name, int _worktime, double _payment)
            : id(_id), name(_name), worktime(_worktime), payment(_payment) {}
    int getId() const {
        return id;
    }
    int getWorkTime() const{
        return worktime;
    }
    std::string getName() const{
        return name;
    }
    double getPayment() const{
        return payment;
    }
    void setTime(int time){
        worktime += time;
    }
};
#endif //PAYMENT_EMPLOYEE_H
