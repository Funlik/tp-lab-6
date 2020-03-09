#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
 
class WorkTime {
public:
    virtual int SalaryWorkTime(int worktime, int rate) = 0;
};