//
// Created by araxal on 03.03.2020.
//

#ifndef LAB6_TEAMLEADER_H
#define LAB6_TEAMLEADER_H

#include "Programmer.h"
#include "Heading.h"
#include <vector>

class TeamLeader : public Programmer, public Heading {
    vector<Programmer *> assigned_programmers;
    double get_payment_according_belongs_staff() final;
public:
    using Programmer::Programmer;

    void get_salary() final {
        payment = get_payment_according_belongs_staff() +
                  get_payment_according_h_worked() +
                  get_payment_according_p_impact();
        set_work_time(0);
    }

    void add_assigned_programmer(Programmer *p);

};

#endif //LAB6_TEAMLEADER_H
