//
// Created by araxal on 03.03.2020.
//
#include "../include/Personal.h"

double Personal::get_payment_according_h_worked() {
    return base * work_time;
}

void Personal::get_salary() {
    payment += get_payment_according_h_worked();
}
