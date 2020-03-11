//
// Created by artem on 10.03.2020.
//

#include "Cleaner.h"

int Cleaner::getSalary() {
    return Personal::getSalary() + toolsPrice;
}

void Cleaner::setToolsPrice(int toolsPrice) {
    Cleaner::toolsPrice = toolsPrice;
}

int Cleaner::getToolsPrice() {
    return Cleaner::toolsPrice;
}

Cleaner::~Cleaner() {

}

Cleaner::Cleaner(int id, std::string name, int worktime, int payment, int toolsPrice) : Personal(id, std::move(name),
                                                                                                 worktime, payment) {
    Cleaner::toolsPrice = toolsPrice;
}
