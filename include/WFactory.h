#ifndef WFACTORY_H
#define WFACTORY_H

#include "Driver.h"
#include "Cleaner.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Tester.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "SeniorManager.h"

#include <iostream>
#include <fstream>
#include <vector>

class WFactory
{
    public:
        WFactory();
        virtual ~WFactory();
        int nextId(){this->count++; return this->count;};

        Driver* createDriver();
        Driver* createDriver(std::string name, int sallary);

        Cleaner* createCleaner();
        Cleaner* createCleaner(std:: string name, int sallary);

        Programmer* createProg();
        Programmer* createProg(std:: string name, int sallary);

        Tester* createTest();
        Tester* createTest(std:: string name, int sallary);

        TeamLeader* createTL();
        TeamLeader* createTL(std:: string name, int sallary);

        Manager* createMng();
        Manager* createMng(std:: string name);

        ProjectManager* createPrMng();
        ProjectManager* createPrMng(std:: string name, int emp_count);

        SeniorManager* createSnMng();
        SeniorManager* createSnMng(std:: string name, int emp_count);

        void createFromFile(std::string filename);
    protected:

    private:
        int count = 0;
        std::vector<Driver*> dr;
        std::vector<Cleaner*> cl;
        std::vector<Programmer*> pr;
        std::vector<Tester*> ts;
        std::vector<TeamLeader*> tl;
        std::vector<Manager*> mn;
        std::vector<ProjectManager*> pmn;
        std::vector<SeniorManager*> smn;
};

#endif // WFACTORY_H
