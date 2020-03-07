//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_TEAMLEADER_H
#define TASK1_TEAMLEA DER_H


#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading{
protected:
    int number_subordinate;
    int payment_per_subordinate;
public:
    TeamLeader(int id, string fio, int worktime, double share, double base, IT_project* project,
            int number_subordinate, int payment_per_subordinate, string spec) :
        Programmer(id, fio, worktime, share, base, project, spec){
        this->number_subordinate = number_subordinate;
        this->payment_per_subordinate = payment_per_subordinate;
    }
    void calc() override {
        payment = worktime_payment(worktime, base) +
                heading_payment(number_subordinate) +
                project_payment(project->getBudget(), share);
    }
    int heading_payment(int number_of_subordinate) override {
        return number_of_subordinate * payment_per_subordinate;
    }
};


#endif //TASK1_TEAMLEADER_H
