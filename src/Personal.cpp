#include "Personal.h"

Personal::Personal(int id, string name, string occupation, int hourly_payment) :
        Employee(id, name, occupation)
{
    this->hourly_payment = hourly_payment;
}

int Personal::calc_payment_by_worktime()
{
    return worktime * hourly_payment;
}

void Personal::calc_payment()
{
    payment = calc_payment_by_worktime();
}
