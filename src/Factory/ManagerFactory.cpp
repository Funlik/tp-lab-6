//
// Created by fiskirton on 09.03.2020.
//

#include "Factory/ManagerFactory.h"
#include "Classes/Common/Manager.h"

Manager * ManagerFactory::create_employee(int id, const string & name, const string & position, int base, Project * project) {
    auto * manager = new Manager(id, name, position);
    manager->setProject(project);
    manager->setContrib(getRandom(0.01, 0.05));
    manager->setWorktime((int)getRandom(100, 160));
    //manager->setPayment(manager->calcSalary());
    return manager;
}
