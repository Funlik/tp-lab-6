//
// Created by Ilya Doroshenko on 26.02.2020.
//

#ifndef PAYMENT_MANAGER_H
#define PAYMENT_MANAGER_H

#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project{
protected:
    int percentByProject;
public:
    Manager () = default;
    Manager(int _id, std::string _name, int _percentByProject)
        : Employee(_id, _name, 0, 0), percentByProject(_percentByProject) {}
        void calculatePaymentByProjectPart(int projectValue) override{
        payment += 0.01 * percentByProject * projectValue;
    }
};

#endif //PAYMENT_MANAGER_H
