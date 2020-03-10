#include "Driver.h"

Driver::Driver(int id, string name, string occupation, int hourly_payment) :
        Personal(id, name, occupation, hourly_payment)
{
    /*
    this->id = id;
    this->name = name;
    this->occupation = occupation;
     */
    this->hourly_payment = hourly_payment;
}
