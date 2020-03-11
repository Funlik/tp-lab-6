//
// Created by lacos on 10.03.2020.
//
#include "tester.h"

int Tester::Calculate()
{
    int budget = _project.length() * 20000;
    _payment = WorkTimePay(_worktime, _rate) + ProjectPay(budget, _projectPercent);

    return _payment;
}
