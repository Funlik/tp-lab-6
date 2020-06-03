#ifndef LAB6_DRIVER_H
#define LAB6_DRIVER_H

#include <utility>

#include "Personal.h"

class Driver: public Personal
{
public:
    Driver(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base) :
            Personal(new_id, std::move(new_name), new_worktime, new_base){};
};

#endif //LAB6_DRIVER_H
