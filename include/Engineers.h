#pragma once
#include <string>
#include "emploee.h"
#include "Interfaces.h"
#include <map>
#include"Company.h"
using namespace std;
extern map <string, int> Projects;
class Engineer: public Employee, public WorkTime, public Project{
protected:
    string project;
    int base;
    float interaction;
    
public:
    Engineer(int ID, string FIO, int BASE, float INTERACTION, string PROJECT );
    void CalcPayment() override;
    int CalcHourPaym() override;
    float CalcProjPaym() override;


};
class Programmer : public Engineer{
public:
    Programmer(int ID, string FIO, int BASE, float INTERACTION, string PROJECT);


};
class Tester : public Engineer{
public:
    Tester(int ID, string FIO, int BASE, float INTERACTION, string PROJECT);

};
class TeamLeader : public Programmer, public Heading{
protected:
    int paymForHead;
    int numSub;
public:
    TeamLeader(int ID, string FIO, int BASE, float INTERACTION, string PROJECT, int PAYMFORHEAD, int NUMSUB);
    void CalcPayment() override;
    int CalcHeadPaym() override;
};