#ifndef UNTITLED1_PROGRAMMER_H
#define UNTITLED1_PROGRAMMER_H


#include "Engineer.h"

class Programmer: public Engineer {
private:
    std::string position = "Programmer";

public:
    Programmer(int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    std::string getPosition();
};


#endif //UNTITLED1_PROGRAMMER_H
