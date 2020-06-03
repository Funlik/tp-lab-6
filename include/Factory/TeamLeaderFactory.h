//
// Created by fiskirton on 09.03.2020.
//

#ifndef STUFF_TEAMLEADERFACTORY_H
#define STUFF_TEAMLEADERFACTORY_H

#include "Factory.h"
#include "Classes/Common/TeamLeader.h"

class TeamLeaderFactory: Factory {
public:
    TeamLeader * create_employee(int id, const string &name, const string &position, int base, Project * project) override;
};


#endif //STUFF_TEAMLEADERFACTORY_H
