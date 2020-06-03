#include "Factory.h"
#include "Employee.h"
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"

int main() {
	Factory* factory = new Factory();
	factory->create_projects("projects.txt");
	factory->create_employees("employees.txt");
	factory->print_information();
}
