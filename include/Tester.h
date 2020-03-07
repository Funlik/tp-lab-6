//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_TESTER_H
#define TASK1_TESTER_H

#include "Engineer.h"

class Tester : public Engineer{
public:
    Tester(int id, string fio, int worktime, double share, double base, IT_project* project, string spec) :
            Engineer(id, fio, worktime, share, base, project, spec){}
    void calc() override {
        payment = worktime_payment(worktime, base) +
                project_payment(project->getBudget(), share) + 5;
    }
};


#endif //TASK1_TESTER_H
