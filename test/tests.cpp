#include "gtest/gtest.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include"Company.h"
#include "emploee.h"
#include "Engineers.h"
#include "Interfaces.h"
#include "Managers.h"
#include "Personals.h"

TEST(cleaner, task1) {
	Cleaner me(1, "Kate Malysheva", 200);

	me.setTime(40);
	me.CalcPayment();

	
	EXPECT_EQ(8000, me.getPayment());

}
TEST(driver, task2) {
	Driver me(1, "Kate Malysheva", 150);

	me.setTime(50);
	me.CalcPayment();


	EXPECT_EQ(7500, me.getPayment());

}
TEST(tester, task3) {
	map <string, int> Projects;
	setProjects();
	Tester me(1, "Kate Malysheva", 350, 0.1, "FirstProject");

	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(19000, me.getPayment());

}
TEST(programmer, task4){
	map <string, int> Projects;
	setProjects();
	Programmer me(1, "Kate Malysheva", 500, 0.1, "FirstProject");

	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(25000, me.getPayment());

}
TEST(teamleader, task5) {
	map <string, int> Projects;
	setProjects();
	TeamLeader me(1, "Kate Malysheva", 500, 0.2, "FirstProject", 1000, 2);

	me.setTime(40);
	me.CalcPayment();
	
	EXPECT_EQ(32000, me.getPayment());

}
TEST(manager, task6) {
	map <string, int> Projects;
	setProjects();
	Manager me(1, "Kate Malysheva", 0.2, "FirstProject");

	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(10000, me.getPayment());
}
TEST(projectmanager, task7) {
	map <string, int> Projects;
	setProjects();
	ProjectManager me(1, "Kate Malysheva", 0.2, "FirstProject", 1000, 2);
	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(12000, me.getPayment());
}
TEST(seniormanager, task7) {
	map <string, int> Projects;
	setProjects();
	SeniorManager me(1, "Kate Malysheva", 0.1, 1000, 29);
	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(97000, me.getPayment());
}