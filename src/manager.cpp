//
// Created by lacos on 19.02.2020.
//
#include "manager.h"

int Manager::ProjectPay(int budget, double percent)
{
    return (int)budget * percent;
}

int Manager::Calculate()
{
    int budget = _project.length() * 20000;
    _payment = ProjectPay(budget, _projectPercent);

    return _payment;
}
