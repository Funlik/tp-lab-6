#include "classes.h"

int main()
{
	Factory *f = new Factory();
	f->create_employee();
	f->print_emp();
	getchar();
}