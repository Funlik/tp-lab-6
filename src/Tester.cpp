//
// Created by artem on 10.03.2020.
//

#include "Tester.h"

Tester::Tester(int id, std::string name, int worktime, int payment, int partOfProject, int numberTests)
        : Engineer(id, name, worktime, payment, partOfProject) {
    Tester::numberTests = numberTests;
}

void Tester::setNumberTests(int numberTests) {
    Tester::numberTests = numberTests;
}

int Tester::getNumberTests() {
    return numberTests;
}

int Tester::getSalary() {
    return Engineer::getSalary() + (numberTests * payment)/2;
}
