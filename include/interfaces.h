//
// Created by Оксана on 26.02.2020.
//

#ifndef TASK1_INTERFACE_H
#define TASK1_INTERFACE_H
//расчёт зарплаты с проекта
class WorkTime {
public:
    WorkTime() {}

    virtual int calcHourlyPay() = 0;
    ~WorkTime() {}
};
//расчет зарплаты по отработанным часам
class Project {
public:
    Project() {}
    virtual float calcProjPay() = 0;
    ~Project() {}
};
//расчет зарплаты по руководству
class Heading
{
public:
    Heading() {}
    virtual int calcHeadPay() = 0;
    ~Heading() {}
};



#endif //TASK1_INTERFACE_H
