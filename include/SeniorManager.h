//
// Created by Илья on 002 02.03.20.
//

#ifndef TASK1_SENIORMANAGER_H
#define TASK1_SENIORMANAGER_H


#include "ProjectManager.h"

class SeniorManager : public ProjectManager{
public:
    SeniorManager(int id, string fio, int worktime, double share, IT_project* project,
                    int number_subordinate, int payment_per_subordinate, string spec) :
            ProjectManager(id, fio, worktime, share, project, number_subordinate, payment_per_subordinate, spec) {}
    void calc() override {
        payment = project_payment(project->getBudget(), share) +
                    1.25 * heading_payment(number_subordinate);
    }
};


#endif //TASK1_SENIORMANAGER_H
