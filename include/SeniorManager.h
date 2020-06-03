//
// Created by ASUS on 04.03.2020.
//

#ifndef PAYMENT_SENIORMANAGER_H
#define PAYMENT_SENIORMANAGER_H

#include <vector>
#include "ProjectManager.h"

class SeniorManager : public ProjectManager{
private:
    void calculatePaymentByProjectPart(int projectValue) override { }
public:
    SeniorManager () = default;
    SeniorManager(int _id, const std::string& _name, int _percentByProject, int _payForMan, int _people)
    : ProjectManager(_id, _name, _percentByProject, _payForMan, _people) {}
    void calculatePaymentByProjectsParts(const std::vector<int> &projectValues) {
        for(auto x : projectValues)
            payment += 0.01 * x * percentByProject;
    }
    void calculatePayment(const std::vector<int> &projectValues){
        this->calculatePaymentByProjectsParts(projectValues);
        this->calculatePaymentByHeading();
    }
};

#endif //PAYMENT_SENIORMANAGER_H
