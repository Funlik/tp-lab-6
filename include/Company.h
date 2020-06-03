//
// Created by ASUS on 06.03.2020.
//

#ifndef PAYMENT_COMPANY_H
#define PAYMENT_COMPANY_H

#include "ProjectTeam.h"

#include "Fabric.h"
//#include "Split.h"
struct Company{
    std::vector<ProjectTeam> teams;
    void setTimeSeniorManager(int time){
        teams[0].seniorManager.setTime(time);
    }
    void calculatePaymentSeniorManager(){
        std::vector<int> values;
        for(auto & x : teams){
            values.push_back(x.getValue());
        }
        teams[0].seniorManager.calculatePayment(values);

    }
};

#endif //PAYMENT_COMPANY_H
