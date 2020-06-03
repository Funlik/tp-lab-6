#ifndef UNTITLED1_CLEANER_H
#define UNTITLED1_CLEANER_H

#include <string>
#include "Personal.h"

class Cleaner: public Personal {
private:
    std::string position = "Cleaner";
public:
    explicit Cleaner (int _id = 0, std::string _name = "Name", int _worktime = 0, double _payment = 0);
    std::string getPosition();
};


#endif //UNTITLED1_CLEANER_H
