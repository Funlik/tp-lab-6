#include "TeamLeader.h"

#include <utility>

TeamLeader::TeamLeader(unsigned int new_id, std::string new_name, unsigned int new_worktime, unsigned int new_base, unsigned int new_bonus, unsigned int new_baselead) :
        Engineer(new_id, std::move(new_name), new_worktime, new_base, new_bonus)
{
    this->baselead = new_baselead;
}

unsigned int TeamLeader::calculateHeadingPayment()
{
    return this->baselead * this->programmers.size();
}

void TeamLeader::calculatePayment()
{
    this->payment = calculateWorkTimePayment() + calculateProjectPayment() + calculateHeadingPayment();
}

void TeamLeader::setBaseLeader(unsigned int baseLeader)
{
    this->baselead = baseLeader;
}

unsigned int TeamLeader::getBaseLeader()
{
    return this->baselead;
}

void TeamLeader::addProgrammers(Programmer* programmer)
{
    this->programmers.push_back(programmer);
}

void TeamLeader::removeAllProgrammers()
{
    this->programmers.clear();
}

void TeamLeader::addTesters(Tester* tester)
{
    this->testers.push_back(tester);
}

void TeamLeader::removeAllTesters()
{
    this->testers.clear();
}
