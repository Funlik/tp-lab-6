#include "Personal.h"

Personal::Personal(unsigned int id, string name, unsigned int base):Employee(id, name)
{
	this->base = base;
}

Driver::Driver(unsigned int id, string name, unsigned int base):Personal(id,name,base){}

Cleaner::Cleaner(unsigned int id, string name, unsigned int base) : Personal(id, name, base){}
