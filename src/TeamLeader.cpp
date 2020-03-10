#include "TeamLeader.h"

TeamLeader::TeamLeader(int id, std::string FIO, std::string position, double worktime, int money, double part, Projects* project, int under)
	: Programmer(id, FIO, position, worktime, money, part, project)
{
	this->payment += PaymentHeading(under, project);
}

int TeamLeader::PaymentHeading(int under, Projects* project)
{
	int count = 0;
	for (Employee* emp : project->GetEmployees())
	{
		if (emp->GetPosition() == "programmer")
			count++;
	}
	return under * count;
}