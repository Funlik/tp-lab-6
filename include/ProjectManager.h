//
// Created by Илья on 002 02.03.20.
//

#ifndef TASK1_PROJECTMANAGER_H
#define TASK1_PROJECTMANAGER_H


#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading{
protected:
    int number_subordinate;
    int payment_per_subordinate;
public:
    ProjectManager(int id, string fio, int worktime, double share, IT_project* project,
            int number_subordinate, int payment_per_subordinate, string spec) :
            Manager(id, fio, worktime, share, project, spec) {
        this->number_subordinate = number_subordinate;
        this->payment_per_subordinate = payment_per_subordinate;
    }
    void calc() override {
        payment = project_payment(project->getBudget(), share) + heading_payment(number_subordinate);
    }

    int heading_payment(int number_of_subordinate) override {
        return number_of_subordinate * payment_per_subordinate;
    }

};


#endif //TASK1_PROJECTMANAGER_H
