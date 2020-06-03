#include "../include/Tester.h"

Tester::Tester(std::string name, int id, int workTime, int payment, int partOfProject, int projectImportance)
    : Engineer(name, id, workTime, payment, partOfProject, projectImportance) {}

Tester::~Tester() {}

int Tester::calcSalary() {
    return calcWorkTimeSalary();
}
