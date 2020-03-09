#include "Programmer.h"



Programmer::Programmer(string fio, int id, int workTime, int payment, Project* project, int partOfProject) : Engineer(fio, id, workTime, payment, project, partOfProject)
{

}

Programmer::Programmer(string fio, int id, int workTime, int payment, int partOfProject) : Engineer(fio, id, workTime, payment, partOfProject)
{

}

Programmer::~Programmer()
{
}

int Programmer::getSalary()
{
	return partOfProject * payment + getSalaryByWorkTime();
}
