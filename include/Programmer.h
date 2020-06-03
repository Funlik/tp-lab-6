//
// Created by Ilya Doroshenko on 26.02.2020.
//

#ifndef PAYMENT_PROGRAMMER_H
#define PAYMENT_PROGRAMMER_H

#include "Engineer.h"

class Programmer : public Engineer{
public:
    Programmer() = default;
    Programmer(int _id, std::string _name, int _salary, int _percentByProject)
    : Engineer(_id, _name, 0, 0, _salary, _percentByProject) {}
};

#endif //PAYMENT_PROGRAMMER_H
