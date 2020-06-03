//
// Created by artem on 11.03.2020.
//

#include "SeniorManager.h"

SeniorManager::SeniorManager(int id, const std::string &name, int worktime, int payment, double partOfProject,
                             int costOfCoder) : ProjectManager(id, name, worktime, payment, partOfProject,
                                                               costOfCoder) {}
