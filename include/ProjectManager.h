#pragma once

#include "Manager.h"
#include "Heading.h"

class ProjectManager : public Manager, public Heading
{
protected:
    size_t number_of_subjects;
public:
    ProjectManager(int, string, string, int, Project*, int);
    int calc_payment_by_heading() override;
    void calc_payment() override;
};
