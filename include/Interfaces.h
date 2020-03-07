//
// Created by Mikhail on 26.02.2020.
//

#ifndef TASK1_INTERFACES_H
#define TASK1_INTERFACES_H
class WorkTime {
public:
    virtual int calcWT() = 0;
};

class Project {
public:
    virtual double calcProject() = 0;
};

class Heading {
public:
    virtual int calcHeading() = 0;
};
#endif //TASK1_INTERFACES_H
