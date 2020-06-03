//
// Created by Ilya Doroshenko on 22.02.2020.
//

#ifndef PAYMENT_PROJECT_H
#define PAYMENT_PROJECT_H

class Project{
public:
    virtual void calculatePaymentByProjectPart(int projectValue) = 0;
};

#endif //PAYMENT_PROJECT_H
