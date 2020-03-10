//
// Created by Mary on 26.02.2020.
//

#ifndef TASK1_WORKTIME_H
#define TASK1_WORKTIME_H
class Worktime{
public:
    virtual double calcWorkTime() = 0;
};

class Project{
public:
    virtual double calcProject() = 0;
};

class Heading{
public:
    virtual double calcHeading() = 0;
};
#endif //TASK1_WORKTIME_H
