#pragma once

#include <Interfaces/Heading.h>
#include "Programmer.h"

class TeamLeader : public Programmer, public Heading {
public:
    TeamLeader(std::string name, int id, int workTime, int payment,
               int partOfProject, int projectImportance, int numberOfSubordinates);

    int getNumberOfSubordinates();
    void setNumberOfSubordinates(int numberOfSubordinates);
    int calcSalary();

private:
    int calcWorkTimeSalary();
    int calcProjectSalary();
    int calcHeadingSalary();
    int numberOfSubordinates;
};