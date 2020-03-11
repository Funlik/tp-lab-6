//
// Created by artem on 10.03.2020.
//

#pragma once

#include "Personal.h"

class Cleaner: public Personal {
private:
    int toolsPrice;
public:
    Cleaner(int id, std::string name, int worktime, int payment, int toolsPrice);
    ~Cleaner();

    void setToolsPrice(int toolsPrice);

    int getToolsPrice();

    int getSalary() override;
};
