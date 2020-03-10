#ifndef LAB6_TEAMLEADER_H
#define LAB6_TEAMLEADER_H

#include "Engineer.h"
#include "Heading.h"
#include "Programmer.h"
#include "Tester.h"
#include <vector>

class TeamLeader: public Engineer, protected Heading
{
protected:
    unsigned int baselead;
    std::vector <Programmer*> programmers;
    std::vector <Tester*> testers;
    unsigned int calculateHeadingPayment();

public:
    TeamLeader(unsigned int new_id, std::string new_name, unsigned int new_workTime, unsigned int new_base, unsigned int new_percent, unsigned int new_baselead);

    void setBaseLeader(unsigned int new_baselead);
    unsigned int getBaseLeader();

    void addProgrammers(Programmer* programmer);
    void removeAllProgrammers();
    void addTesters(Tester* tester);
    void removeAllTesters();

    void calculatePayment();
};

#endif //LAB6_TEAMLEADER_H
