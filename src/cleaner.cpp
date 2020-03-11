//
// Created by lacos on 04.03.2020.
//
#include <iostream>
#include <random>
#include <ctime>
#include "cleaner.h"

int Cleaner::Calculate()
{
    std::mt19937 gen;
    gen.seed(time(nullptr));
    _payment = WorkTimePay(_worktime, _rate) + 1000 -  gen() % 2000;

    return _payment;
}
