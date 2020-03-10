//
// Created by fiskirton on 09.03.2020.
//

#include "Factory/TeamLeaderFactory.h"
#include "Classes/Common/TeamLeader.h"

TeamLeader * TeamLeaderFactory::create_employee(int id, const string &name, const string &position, int base, Project * project) {
    auto * teamleader = new TeamLeader(id, name, position);
    teamleader->setBaseRate(base);
    teamleader->setBaseSalaryCoef(getRandom(1.0, 1.3));
    teamleader->setWorktime(getRandom(100, 160));
    teamleader->setContrib(getRandom(0.01, 0.07));
    teamleader->setProject(project);
    return teamleader;
}
