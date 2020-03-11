//
// Created by lacos on 10.03.2020.
//
#include <iostream>
#include <random>
#include <ctime>
#include "driver.h"

int Driver::Calculate()
{
    std::mt19937 gen;
    gen.seed(time(nullptr));
    _payment = WorkTimePay(_worktime, _rate) + 4000 -  gen() % 2000;

    return _payment;
}
