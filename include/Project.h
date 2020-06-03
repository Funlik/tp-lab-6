//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_PROJECT_H
#define TASK1_PROJECT_H


class Project {
public:
    // function gets project budget(int) and share of employee(double)
    // and returns integer payment
    virtual int project_payment(int, double)=0;
};


#endif //TASK1_PROJECT_H
