//
// Created by lacos on 11.03.2020.
//
#include "senior_manager.h"

int SeniorManager::Calculate()
{
    int budget = 0;
    for (auto project : _projects)
        budget += project.length() * 20000;

    _payment = ProjectPay(budget, _projectPercent) + HeadingPay(_personalCount, _personalRate);

    return _payment;
}
