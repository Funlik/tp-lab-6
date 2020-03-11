//
// Created by artem on 10.03.2020.
//

#pragma once


#include "Engineer.h"

class Programmer: public Engineer {
public:
    Programmer(int id, std::string name, int worktime, int payment, double partOfProject);
};

