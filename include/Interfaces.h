#pragma once
#include <string>
#define WORKTIME 40


class WorkTime {
public:

    virtual double work_time() = 0;
};

class Project {
public:

    virtual double pay_project() = 0;
};


class Heading {
public:
    virtual double pay_head() = 0;
};
