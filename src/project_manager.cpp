//
// Created by lacos on 11.03.2020.
//
#include "project_manager.h"

int ProjectManager::HeadingPay(int personalCount, int rate)
{
    return personalCount * rate;
}

int ProjectManager::Calculate()
{
    int budget = _project.length() * 20000;
    _payment = ProjectPay(budget, _projectPercent) + HeadingPay(_personalCount, _personalRate);

    return _payment;
}

