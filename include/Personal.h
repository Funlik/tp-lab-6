#ifndef PERSONAL_H
#define PERSONAL_H

#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public WorkTime
{
    public:
        Personal(){};
        Personal(std::string name, int sallary);
        int calcWT(){return this->getSal() * this->getWorktime();};
        void calc(){this->setSal(this->calcWT());};
        int getSal(){return this->sallary;};
        std::string toString();
    private:
        int sallary;
};

#endif // PERSONAL_H
