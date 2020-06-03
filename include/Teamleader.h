#pragma once
#include "Programmer.h"
#include "Heading.h"

class TeamLeader : public Programmer, public Heading
{
protected:
    size_t number_of_subjects;
public:
    TeamLeader(int, string, string, int, int, Project*, int);
    int calc_payment_by_heading() override;
    void calc_payment() override;
};
