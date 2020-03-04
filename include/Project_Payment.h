//
// Created by Anton Korkunov on 26/02/2020.
//

#ifndef LAB6_PROJECT_PAYMENT_H
#define LAB6_PROJECT_PAYMENT_H

//#include "Project.h"
class Project;


class Project_Payment{
protected:
    float BudgetProportion=0;
    Project* curProject=nullptr;
public:
    virtual double ProjectPayment()=0;
    void Add_to_Project(Project* tmp){
        curProject=tmp;
    }
};


#endif //LAB6_PROJECT_PAYMENT_H
