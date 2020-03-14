#include <vector>

#include "includeHeader.h"
#include "Employee.h"
#include "Engineer.h"
#include "Personal.h"
#include "Manager.h"

int main()
{
	vector<Employee*> empl;
	Cleaner cl = Cleaner(1, "name", 2);
	Programmer pr = Programmer(2, "name", "team", 2, 3);
	Driver dr = Driver(3, "name3", 4);
	Tester ts = Tester(4, "name4", " team", 2, 2);
	Manager mg = Manager(5, "name234", "asdf", 5);
	TeamLeader tel = TeamLeader(6, "nameTM", "yeam", 10, 5, 3);
	ProjectManager prmg = ProjectManager(7, "name", "tram", 5, 4);
	SeniorManager senmg = SeniorManager(8, "senior", "te", 1010, 7);

	empl.push_back(&cl);
	empl.push_back(&pr);
	empl.push_back(&dr);
	empl.push_back(&ts);
	empl.push_back(&mg);
	empl.push_back(&tel);
	empl.push_back(&prmg);
	empl.push_back(&senmg);

	for (Employee* e : empl) {
		e->print();
		e->setWorkTime(5);
		cout << "Counting Pay,ent:  " << e->paymentCount() << endl;
	}



	return 0;


}