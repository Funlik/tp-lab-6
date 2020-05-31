//
// Created by Илья Соловьёв on 26.02.2020.
//

#ifndef TASK1_INTERFACES_H
#define TASK1_INTERFACES_H

class WorkTime {
public:
    virtual double workDaysPayment() = 0;
};


class Project {
public:
    virtual double projectPayment() = 0;
};


class Heading {
public:
    virtual double headingPayment() = 0;
};

#endif //TASK1_INTERFACES_H
