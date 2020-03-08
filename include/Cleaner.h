#ifndef CLEANER_H
#define CLEANER_H

#include "StaffEmployee.h"

class Cleaner : public StaffEmployee
{
public:
    Cleaner(int32_t id, std::string name, int32_t worktime)
        : StaffEmployee(id, name, worktime, 16) { }
};

#endif // CLEANER_H
