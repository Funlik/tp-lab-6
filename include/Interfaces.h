//
// Created by aklen on 05.03.2020.
//
#ifndef INTERFACES_H
#define INTERFACES_H

class WorkTime{
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
#endif