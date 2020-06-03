//
// Created by Mikhail on 08.03.2020.
//

#ifndef TASK1_FACTORY_H
#define TASK1_FACTORY_H


#include <vector>
#include <AbstractClasses.h>
#include <iostream>
#include <Generators.h>
#include <map>

using std::vector;
using std::string;
using std::map;

class Factory {
public:
    static Employee * createEmployee(vector<string> &);
};
#endif //TASK1_FACTORY_H
