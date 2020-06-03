#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include <Programmer.h>
#include "Heading.h"

class TeamLeader : public Programmer, public Heading
{
    public:
        TeamLeader(std::string name, int sallary);
        int calcH(){return this->emp_count * 40;};
        void calc(int prPart, int prMonney){this->Employee::setSal(this->calcH() + this->calcWT() + this->calcPr(prPart, prMonney));};
        void setEmpCount(int emp_count){this->emp_count = emp_count;};
    protected:

    private:
        int emp_count;
};

#endif // TEAMLEADER_H
