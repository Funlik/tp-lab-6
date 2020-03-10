#ifndef UNTITLED1_TEAMLEADER_H
#define UNTITLED1_TEAMLEADER_H


#include "Programmer.h"
#include "Heading.h"

class TeamLeader: public Programmer, public Heading {
private:
    std::string position = "TeamLeader";

public:
    explicit TeamLeader(int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    double payroll(int projectBudget, int people );
    double payroll2(int projectBudget);
    int payroll3(int people);
    std::string getPosition();
};


#endif //UNTITLED1_TEAMLEADER_H
