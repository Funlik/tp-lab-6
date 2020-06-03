//
// Created by artem on 10.03.2020.
//
#pragma once

#include <string>
#include "Engineer.h"

class Tester: public Engineer {
private:
    int numberTests;

public:
    Tester(int id, std::string name, int worktime, int payment, int partOfProject, int numberTests);

    void setNumberTests(int numberTests);

    int getNumberTests();

    int getSalary() override;
};
