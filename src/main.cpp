//
// Created by Илья on 019 19.02.20.
//
#include <iostream>
#include <iomanip>
#include "EmployeeFactory.h"
using std::cout;
using std::endl;

int main(){
    EmployeeFactory* fc = new EmployeeFactory("employees.txt", "budgets.txt");
    auto employees = fc->getEmployees();
    for(auto employee : *employees){
        employee->calc();
    }

    cout <<std::setw(6) << "ID:" << std::setw(20) << "FIO:" <<
    std::setw(15) << "Spec:" << std::setw(10) << "Worktime:" << std::setw(10) << "Payment" << endl;
    for(auto employee : *employees){
        cout << std::setw(6) << employee->getId()
        << std::setw(20) << employee->getFio()
        << std::setw(15) << employee->getSpec()
        << std::setw(10) << employee->getWorktime()
        << std::setw(10) << employee->getPayment() << endl;
    }
}