//
// Created by Ilya Doroshenko on 04.03.2020.
//

#ifndef PAYMENT_PROJECTMANAGER_H
#define PAYMENT_PROJECTMANAGER_H

#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading{
protected:
    int payForMan;
    int people;
public:
    ProjectManager () = default;
    ProjectManager(int _id, std::string _name, int _percentByProject, int _payForMan, int _people)
    : Manager(_id, _name, _percentByProject), payForMan(_payForMan), people(_people) {}
    void calculatePaymentByHeading() override{
        payment += payForMan * people;
    }
};

#endif //PAYMENT_PROJECTMANAGER_H
