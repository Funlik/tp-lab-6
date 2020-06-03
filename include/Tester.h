//
// Created by Ilya Doroshenko on 26.02.2020.
//

#ifndef PAYMENT_TESTER_H
#define PAYMENT_TESTER_H

#include "Engineer.h"

class Tester : public Engineer{
public:
    Tester(int _id, std::string _name, int _salary, int _percentByProject)
            : Engineer(_id, _name, 0, 0, _salary, _percentByProject) {}

};


#endif //PAYMENT_TESTER_H
