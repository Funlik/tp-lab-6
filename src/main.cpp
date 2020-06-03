
#include <iostream>
#include <fstream>
#include "Company.h"

int main() {/*
    std::ifstream file_people("people.txt");
    std::ifstream file_projects("projects.txt");
    Company company;
    company.teams = split(file_people, file_projects);

    company.setTimeSeniorManager(40);
    company.calculatePaymentSeniorManager();
    for(int i = 0; i < 4; i++) {
        company.teams[i].setTime(40);
        company.teams[i].calcPayment();
        company.teams[i].getDeclaration();
    }
    company.teams[0].getValue();
    company.teams[0].getName();
*/
    std::cout << std::fixed;

    SeniorManager seniorManager(1, "Doroshenko Nikita", 100, 50000, 28);
    seniorManager.calculatePayment({50000, 100000});
    std::cout << seniorManager.getPayment();
    return 0;
}
