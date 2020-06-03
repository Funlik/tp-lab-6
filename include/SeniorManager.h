//
// Created by artem on 11.03.2020.
//

#pragma once


#include "ProjectManager.h"

class SeniorManager: public ProjectManager {
public:
    SeniorManager(int id, const std::string &name, int worktime, int payment, double partOfProject, int costOfCoder);
};

