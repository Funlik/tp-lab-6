#ifndef PROJECTMANAGER_H
#define PROJECTMANAGER_H

#include <Manager.h>
#include <Heading.h>


class ProjectManager : public Manager, public Heading
{
    public:
        ProjectManager(std::string name, int emp_count);
        int getEmp(){return this->emp_count;};
        int calcH(){return this->emp_count * 40;};
        void calc(int prPart, int prMonney){this->setSal(this->calcH() + this->calcPr(prPart, prMonney));};
        std::string toString();
    protected:

    private:
        int emp_count;
};

#endif // PROJECTMANAGER_H
