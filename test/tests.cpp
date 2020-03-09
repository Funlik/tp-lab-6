#include "gtest/gtest.h"
#include "Engineer.h"
#include "Employee.h"
#include "Factory.h"
#include "Interfaces.h"
#include "Personal.h"
#include "Project.h"
#include "Manager.h"

TEST(PersonalInitialization, Cleaner)
{
	Cleaner c(2, "Lil Pump", 70);
	c.SetWorktime(40);

	int answer = 2800;

	EXPECT_EQ(c.CalculateWage(), answer);
}

TEST(PersonalInitialization, Driver)
{
	Driver d(1, "Matt Dog", 100, 200);
	d.SetWorktime(40);

	int answer = 4200;

	EXPECT_EQ(d.CalculateWage(), answer);
}

TEST(EngineerInitialization, Programmer)
{
	Project proj("Circles", 20000);
	Programmer p(3, "Mac Miller", 200, &proj, 20);
	p.SetWorktime(40);

	int answer = 12000;

	EXPECT_EQ(p.CalculateWage(), answer);
}

TEST(EngineerInitialization, Tester)
{
	Project proj("Savage Mode", 10000);
	Tester t(5, "21 Savage", 200, &proj, 20, 500);
	t.SetWorktime(40);

	int answer = 10500;

	EXPECT_EQ(t.CalculateWage(), answer);
}

TEST(EngineerInitialization, TeamLeader)
{
	Project proj("Jesus is king", 40000);
	TeamLeader tl(4, "Kanye West", 200, &proj, 50, 10, 1000);
	tl.SetWorktime(40);

	int answer = 38000;

	EXPECT_EQ(tl.CalculateWage(), answer);
}

TEST(ManagerInitialization, ProjectManager)
{
	Project proj("Shelby", 10000);
	ProjectManager pm(6, "Lil Skies", &proj, 40, 10, 500);
	pm.SetWorktime(40);

	int answer = 9000;

	EXPECT_EQ(pm.CalculateWage(), answer);
}

TEST(ManagerInitialization, SeniorManager)
{
	Project proj1("Luv is rage 2", 10000);
	Project proj2("Eternal Atake", 15000);
	std::vector<Project*> projects;
	projects.push_back(&proj1);
	projects.push_back(&proj2);

	SeniorManager sm(7, "Lil Uzi Vert", projects, 90, 20, 400);
	sm.SetWorktime(40);

	int answer = 30500;

	EXPECT_EQ(sm.CalculateWage(), answer);
}

TEST(Polymorphism, VectorOfEmployees)
{
	Cleaner c(2, "Lil Pump", 70);
	c.SetWorktime(40);
	Driver d(1, "Matt Dog", 100, 200);
	d.SetWorktime(40);

	std::vector<Employee *> employees;
	employees.push_back(&c);
	employees.push_back(&d);

	EXPECT_EQ(c.CalculateWage(), 2800);
	EXPECT_EQ(d.CalculateWage(), 4200);
	EXPECT_EQ(employees.size(), 2);
}