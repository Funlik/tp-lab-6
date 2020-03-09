#include <iostream>
#include <string>
#include "Manager.h"
#include "Factory.h"
#include "ProjectManager.h"
using namespace std;

int main()
{
	Factory fac = Factory("manager.txt", "personal.txt");
	Manager* man = fac.LoadManager();
	vector <Employee*> vec;
	vec.push_back(man);
	for (Project* pr : man->getProjects())
	{
		vec.push_back(pr->getProjectManager());
		for (Employee* em : pr->getStuff())
		{
			vec.push_back(em);
		}
	}
	vector<Personal*> pe = fac.LoadPersonal();
	for (Personal* per : pe)
	{
		vec.push_back(per);
	}
	for (Employee* em : vec)
	{
		cout << em->getFio() << " got " << em->getSalary() << endl;
	}
}
