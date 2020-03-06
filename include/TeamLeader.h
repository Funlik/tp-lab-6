#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include <vector>

#include "Programmer.h"
#include "Tester.h"
#include "IHeading.h"

class TeamLeader : public Programmer, public IHeading
{
protected:
    double leaderBase;
    std::vector<Tester*> testers;
	std::vector<Programmer*> programmers;

public:
    TeamLeader(int id, std::string name, double worktime, double base, double leaderBase, double budget, double percent);
    ~TeamLeader();
    double getLeaderBase();
    std::vector<Tester*> getTesters();
	std::vector<Programmer*> getProgrammers();
    void setLeaderBase(double leaderBase);
    void addTester(Tester* tester);
    void addProgrammer(Programmer* programmer);
    void deleteTeater(Tester* tester);
    void deleteProgrammer(Programmer* programmer);
    void deleteAllTesters();
    void deleteAllProgrammers();
    void deleteAll();
    double calculateHeadingPayment();
    void calculatePayment();
};

#endif