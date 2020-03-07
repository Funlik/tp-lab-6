#ifndef ENGINEER_H
#define ENGINEER_H

#include <Employee.h>
#include "WorkTime.h"
#include "Project.h"


class Engineer : public Employee, public WorkTime, public Project
{
    public:
        Engineer(std::string name, int sallary);
        void setPrName(std::string projName){this->projName = projName;};
        void setSal(int sallary){this->sallary = sallary;};

        int getSal(){return this->sallary;};
        std::string getPrName(){return this->projName;};
        std::string toString();

        int calcWT(){return this->getWorktime() * this->sallary;};
        int calcPr(int prPart, int prMonney){return prMonney / prPart;};
        void calc(int prPart, int prMonney){this->Employee::setSal(calcPr(prPart, prMonney) + this->calcWT());};
    protected:

    private:
        int sallary;
        std::string projName;
};

#endif // ENGINEER_H
