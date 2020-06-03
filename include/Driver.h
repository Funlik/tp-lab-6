#pragma once
#include <string>
#include "Employee.h"
#include "Personal.h"

class Driver : public Personal
{
public:
    Driver(int, string, string, int);
};

