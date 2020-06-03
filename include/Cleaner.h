#pragma once

#include "Personal.h"

class Cleaner : public Personal {
public:
    Cleaner(std::string name, int id, int payment, int workTime);
    ~Cleaner();
    int getCleaningQuality();
    void setCleaningQuality(int cleaningQuality);
    int calcSalary();

private:
    int calcWorkTimeSalary();
    int cleaningQuality;
};

