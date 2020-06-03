//
// Created by lacos on 10.03.2020.
//

#ifndef TASK1_TEAM_LEADER_H
#define TASK1_TEAM_LEADER_H

#include "programmer.h"
#include "iheading.h"

class TeamLeader : public Programmer, IHeading
{
public:
    int Calculate() override;
    int HeadingPay(int personalCount, int rate) override;

    TeamLeader(string id, string name, string position, string project, int rate, int worktime, double percent, int personalCount, int personalRate) :
        Programmer(id, name, position, project, rate, worktime, percent)
    {
        _personalCount = personalCount;
        _personalRate = personalRate;
    }
protected:
    int _personalCount;
    int _personalRate;
};

#endif //TASK1_TEAM_LEADER_H
