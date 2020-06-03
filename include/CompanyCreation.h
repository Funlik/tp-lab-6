#ifndef creationCompanyH
#define creationCompanyH

#include "Employee.h"
#include "Personal.h"
#include "Engineer.h"
#include "Manager.h"

class CompanyCreation
{
private:
	Programmer* addProgrammer(int ID, string name, int worktime, int base);
	TeamLeader* addTeamLeader(int ID, string name, int worktime, int base);
	Tester* addTester(int ID, string name, int worktime, int base);
	Manager* addManager(int ID, string name, int worktime, int per);
	ProjectManager* addProjManager(int ID, string name, int worktime, int per);
	SeniorManager* addSenManager(int ID, string name, int worktime, int per);
	Cleaner* addCleaner(int ID, string name, int worktime, int base);
	Driver* addDriver(int ID, string name, int worktime, int base);
	
public:
	Employee* addEmployee(int ID, string name, string position, int worktime, int base, int per);
};

#endif
