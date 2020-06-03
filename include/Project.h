//
// Created by artem on 10.03.2020.
//

#pragma once

#include <string>
#include <vector>

class Project {

private:
    std::string title;
    double budget;
    std::vector<class Engineer *> stuff;

public:
    Project(std::string title, double budget);

    ~Project();

    std::string getTitle();

    std::vector<Engineer *> getStuff();

    void addEmployee(Engineer *engineer);

    void setBudget(double budget);

    double getBudget();

    int getStuffSize();
};

