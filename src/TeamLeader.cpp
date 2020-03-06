#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, std::string name, double worktime, double base, double leaderBase, double budget, double percent)
    : Programmer(id, name, worktime, base, budget, percent)
{
    this->leaderBase = leaderBase;
}

TeamLeader::~TeamLeader()
{
}

double TeamLeader::getLeaderBase()
{
    return this->leaderBase;
}

std::vector<Tester*> TeamLeader::getTesters()
{
    return this->testers;
}

std::vector<Programmer*> TeamLeader::getProgrammers()
{
    return this->programmers;
}

void TeamLeader::setLeaderBase(double leaderBase)
{
    this->leaderBase = leaderBase;
}

void TeamLeader::addTester(Tester* tester)
{
    this->testers.push_back(tester);
}

void TeamLeader::addProgrammer(Programmer* programmer)
{
    this->programmers.push_back(programmer);
}

void TeamLeader::deleteTeater(Tester* tester)
{
    std::vector<Tester*>::iterator i = this->testers.begin();
    while (i != this->testers.end())
    {
        if (*i == tester)
        {
            this->testers.erase(i);
            return;
        }
        i++;
    }
}

void TeamLeader::deleteProgrammer(Programmer* programmer)
{
    std::vector<Programmer*>::iterator i = this->programmers.begin();
    while (i != this->programmers.end())
    {
        if (*i == programmer)
        {
            this->programmers.erase(i);
            return;
        }
        i++;
    }
}

void TeamLeader::deleteAllTesters()
{
    this->testers.clear();
}

void TeamLeader::deleteAllProgrammers()
{
    this->programmers.clear();
}

void TeamLeader::deleteAll()
{
    this->testers.clear();
    this->programmers.clear();
}

double TeamLeader::calculateHeadingPayment()
{
    return leaderBase * (this->programmers.size() + this->testers.size());
}

void TeamLeader::calculatePayment()
{
    this->payment = this->calculateWorkTimePayment() + this->calculateHeadingPayment() + this->calculateProjectPayment();
}
