#pragma once
#include <string>
#include <vector>
#include "Employee.h"

class IProject
{
public:
    virtual int calc_payment_by_project() = 0;
};

class Project
{
private:
    string title;
    int budget;
public:
    Project(string, int);
    int getBudget();
    const string& getTitle();
};

