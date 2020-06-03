#ifndef LAB6_CLEANER_H
#define LAB6_CLEANER_H

#include <utility>

#include "Personal.h"

class Cleaner: public Personal
{
public:
    Cleaner(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base): Personal(new_id, std::move(new_name), new_worktime, new_base) {};
};

#endif //LAB6_CLEANER_H
