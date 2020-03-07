#ifndef MANAGER_H
#define MANAGER_H

#include <Employee.h>
#include <Project.h>

class Manager : public Employee, public Project
{
    public:
        Manager(std::string name);
        void setPrName(std::string projName){this->projName = projName;};
        std::string getPrName(){return this->projName;};
        std::string toString();
        int calcPr(int prPart, int prMonney){return prMonney / prPart;};
        void calc(int prPart, int prMonney){this->setSal(this->calcPr(prPart, prMonney));};
    protected:

    private:
        std::string projName;
};

#endif // MANAGER_H
