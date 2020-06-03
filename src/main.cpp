#include "Staff.h"
#include <iostream>

int main() {
	Staff staff;
	staff.readProjects("projects.txt");
	staff.readStaffMembers("staff.txt");
	staff.printSalaries();
	return 0;
}