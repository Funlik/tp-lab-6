//
// Created by lacos on 10.03.2020.
//
#include "team_leader.h"

int TeamLeader::HeadingPay(int personalCount, int rate)
{
    return personalCount * rate;
}

int TeamLeader::Calculate()
{
    int budget = _project.length() * 20000;
    _payment = WorkTimePay(_worktime, _rate) + ProjectPay(budget, _projectPercent) + HeadingPay(_personalCount, _personalRate);

    return _payment;
}
