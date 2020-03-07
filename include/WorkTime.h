//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_WORKTIME_H
#define TASK1_WORKTIME_H

class WorkTime{
public:
    // function gets number of hours and payment per hour
    // returns integer payment
    virtual int worktime_payment(int, double)=0;
};

#endif //TASK1_WORKTIME_H
