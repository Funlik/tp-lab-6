//
// Created by Оксана on 26.02.2020.
//

#ifndef TASK1_FACTORY_H
#define TASK1_FACTORY_H
#include "abstracts.h"
#include "interfaces.h"
#include "basic.h"
#include <cstdlib>
#include <vector>

using namespace std;

vector<string> split(const string &s, char del);

class Factory
{
public:
    virtual ~Factory() {}
    // Параметризированный статический фабричный метод
    static Employee* createEmployee(vector<string> worker);
};




#endif //TASK1_FACTORY_H
