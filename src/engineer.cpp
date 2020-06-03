//
// Created by lacos on 19.02.2020.
//

#include "engineer.h"

int Engineer::WorkTimePay(int hours, int rate)
{
    return hours * rate;
}

int Engineer::ProjectPay(int budget, double percent)
{
    return (int)budget * percent;
}

