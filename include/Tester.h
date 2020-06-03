#ifndef UNTITLED1_TESTER_H
#define UNTITLED1_TESTER_H


#include "Engineer.h"

class Tester: public Engineer {
private:
    std::string position = "Tester";
public:
    Tester(int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    std::string getPosition();
};


#endif //UNTITLED1_TESTER_H
