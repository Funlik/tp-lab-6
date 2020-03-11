#include "gtest/gtest.h"

#include "Cleaner.h"
#include "Driver.h"
#include "Employee.h"
#include "Personal.h"
#include "Worktime.h"
#include "Project.h"
#include "Manager.h"
#include "Programmer.h"
#include "ProjectManager.h"
#include "Tester.h"
#include "TeamLeader.h"
#include "SeniorManager.h"

TEST(lab6, task1)	//done
{
	Cleaner Sasha(1, "Sasha", 10, 10);
	//cout << Sasha.getID() << endl;
	EXPECT_EQ(1, Sasha.getID());
}

TEST(lab6, task2)	//done
{
	Manager Petya(2, "Petya", 20, 15);
	EXPECT_EQ(15000, Petya.calculateProjectPayment(100000, Petya.getPercent()));
}

TEST(lab6, task3)	//done
{
	Programmer Masha(3, "Masha", 30, 400);
	Masha.calc(100000, 10);
	EXPECT_EQ(22000, Masha.getRate());
}

TEST(lab6, task4)	//done
{
	TeamLeader Jenya(4, "Jenya", 40, 500);
	Jenya.addProgrammer(new Programmer(5, "Pavel", 50, 600));
	Jenya.calc(100000, 20, 700);
	EXPECT_EQ(40500, Jenya.getRate());
}