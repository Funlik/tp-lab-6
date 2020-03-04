//
// Created by Anton Korkunov on 13/02/2020.
//

#include <iostream>
#include "Employee.h"

#ifndef LAB6_HEADING_H
#define LAB6_HEADING_H

class Heading {

protected:
    int Subordinates;
    float Manager_rate;
public:
    virtual double Heading_Payment()=0;
    void SetSub(int _Subordinates){
        Subordinates=_Subordinates;
        return;
    }
};

#endif //LAB6_HEADING_H
