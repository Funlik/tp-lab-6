#include "gtest/gtest.h"

#include "Creator.h"

TEST(Cleaner, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "Cleaner";
	inf.base = 100;
	inf.worktime = 130;
	Employee* employee = factory->make_employee(inf);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 13000);
}

TEST(Driver, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "Driver";
	inf.base = 150;
	inf.worktime = 100;
	Employee* employee = factory->make_employee(inf);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_GE(salary, 15000);

}

TEST(Programmer, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	InfProject* project = new InfProject("Proj_1", 20000);
	project->per_programmer = 100;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "Progremmer";
	inf.base = 150;
	inf.worktime = 100;
	Employee* employee = factory->make_employee(inf);
	employee->set_project(project);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 35000);
}

TEST(Tester, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	InfProject* project = new InfProject("Proj_1", 40000);
	project->per_tester = 50;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "Tester";
	inf.base = 130;
	inf.worktime = 50;
	Employee* employee = factory->make_employee(inf);
	employee->set_project(project);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 26500);
}

TEST(TeamLeader, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	InfProject* project = new InfProject("Proj_1", 100000);
	project->num_programmer = 3;
	project->num_tester = 1;
	project->per_team_leader = 20;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "TeamLeader";
	inf.base = 200;
	inf.worktime = 100;
	Employee* employee = factory->make_employee(inf);
	employee->set_project(project);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 40600);
}

TEST(Manager, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	InfProject* project = new InfProject("Proj_1", 100000);
	project->per_manager = 60;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "Manager";
	Employee* employee = factory->make_employee(inf);
	employee->set_project(project);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 60000);
}

TEST(ProjectManager, calc_payment)
{
	Factory* factory = new Factory();
	Information inf;
	InfProject* project = new InfProject("Proj_1", 100000);
	project->num_manager = 2;
	project->num_programmer = 5;
	project->num_tester = 2;
	project->num_team_leader = 1;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "ProjectManager";
	Employee* employee = factory->make_employee(inf);
	employee->set_project(project);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 21000);
}

TEST(SeniorManager, calculate_payment)
{
	Factory* factory = new Factory();
	Information inf;
	InfProject* project_1 = new InfProject("Proj_1", 100000);
	project_1->num_manager = 2;
	project_1->num_programmer = 5;
	project_1->num_tester = 2;
	project_1->num_team_leader = 1;
	InfProject* project_2 = new InfProject("Proj_2", 200000);
	project_2->num_manager = 2;
	project_2->num_programmer = 4;
	project_2->num_tester = 3;
	project_2->num_team_leader = 1;
	inf.id = 1000;
	inf.name = "Vokh Luz Ser";
	inf.position = "SeniorManager";
	Employee* employee = factory->make_employee(inf);
	employee->set_project(project_1);
	employee->set_project(project_2);
	employee->calc();
	int salary = employee->get_payment();
	EXPECT_EQ(salary, 31540);
}