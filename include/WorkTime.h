//
// Created by Anton Korkunov on 13/02/2020.
//

#ifndef LAB6_WORKTIME_H
#define LAB6_WORKTIME_H

class WorkTime{
protected:
    float payrate;
public:
    virtual double WorkTime_Payment()=0;
};

#endif //LAB6_WORKTIME_H
