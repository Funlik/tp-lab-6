//
// Created by Ilya Doroshenko on 26.02.2020.
//

#ifndef PAYMENT_TEAMLEADER_H
#define PAYMENT_TEAMLEADER_H

#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading{
protected:
    int people;
    int payForMan;
public:
    TeamLeader () = default;
    TeamLeader(int _id, std::string _name, int _salary, int _percentByProject, int _payForMan, int _people)
    : Programmer(_id, _name, _salary, _percentByProject), people(_people), payForMan(_payForMan) {}
    void calculatePaymentByHeading() override{
        payment += payForMan * people;
    }
};


#endif //PAYMENT_TEAMLEADER_H
