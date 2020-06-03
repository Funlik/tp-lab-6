
#pragma once

class WorkTime {
public:
    WorkTime() {}

    virtual int CalcHourPaym() = 0;

    ~WorkTime() {}
};

class Project {
public:
    Project() {}
    virtual float CalcProjPaym() = 0;
    ~Project() {}
};

class Heading
{
public:
    Heading() {}
    virtual int CalcHeadPaym() = 0;
    ~Heading() {}
};
