#include "gtest/gtest.h"
#include "Engineer.h"
#include "Employee.h"
#include "Factory.h"
#include "Interfaces.h"
#include "Personal.h"
#include "Manager.h"

TEST(Personal, Cleaner) {
	Cleaner* cleaner = new Cleaner(1, "Brad Pitt", 5, 200);
	cleaner->set_payment();
	EXPECT_EQ(cleaner->get_payment(), 1000);
}

TEST(Personal, Driver) {
	Driver* driver = new Driver(1, "Brad Pitt", 6.5, 166);
	driver->set_payment();
	EXPECT_EQ(driver->get_payment(), 1079);
}

TEST(Engineer, engineers) {
	map <string,int> projects = {{ "Project1", 100000 },
                                 { "Project2", 55555 }};
								 
	Tester* tester = new Tester(1, "Brad Pitt", 7, 2500, "Project1", 0.4);
	Programmer* proger = new Programmer(2, "James Bond", 11, 3000, "Project2", 0.3);
	TeamLeader* teamlid = new TeamLeader(3, "Lev Tolstoy", 5, 3500, "Project1", 0.25, 1);
	
	EXPECT_EQ(tester->project_salary(), 40000);
	EXPECT_EQ(proger->worktime_salary(), 330000);
	EXPECT_EQ(teamlid->heading_salary(), 100);
	EXPECT_EQ(teamlid->project_salary(), 25000);
	
	teamlid->set_payment();
	int answer = 100 + 17500 + 100000 * 0.25;
	EXPECT_EQ(teamlid->get_payment(), answer);
}

TEST(Manager, SeniorManager) {
	map <string,int> projects = {{ "Project1", 100000 },
                                 { "Project2", 55555 },
								 { "Project3", 40000 }};
								 
	SeniorManager* senior = new SeniorManager(1, "Brad Pitt", "Project1", 0.5, 4);
	senior->set_payment();		 
	EXPECT_EQ(senior->get_payment(), 98177.5);
}
