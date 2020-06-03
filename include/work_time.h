//
// Created by lacos on 26.02.2020.
//

#ifndef TASK1_WORK_TIME_H
#define TASK1_WORK_TIME_H

class IWorkTime
{
public:
    virtual int WorkTimePay(int hours, int rate) = 0;
};

#endif //TASK1_WORK_TIME_H
