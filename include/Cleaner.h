#ifndef CLEANER_H
#define CLEANER_H

#include "Personal.h"

class Cleaner: public Personal {
public:
	Cleaner(int id, std::string name, int worktime, int base) : Personal(id, name, worktime, base) {}
};

#endif // !CLEANER_H
