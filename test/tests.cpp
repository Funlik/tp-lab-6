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
extern map <string, int> Projects;
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
	Projects["FirstProject"] = 50000;

	EXPECT_EQ(7500, me.getPayment());

}
TEST(tester, task3) {
	Projects["FirstProject"] = 50000;
	Tester me(1, "Kate Malysheva", 350, 0.1, "FirstProject");

	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(19000, me.getPayment());

}
TEST(programmer, task4){
	Projects["FirstProject"] = 50000;
	Programmer me(1, "Kate Malysheva", 500, 0.1, "FirstProject");

	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(25000, me.getPayment());

}
TEST(teamleader, task5) {
	Projects["FirstProject"] = 50000;
	TeamLeader me(1, "Kate Malysheva", 500, 0.2, "FirstProject", 1000, 2);

	me.setTime(40);
	me.CalcPayment();
	
	EXPECT_EQ(32000, me.getPayment());

}
TEST(manager, task6) {
	Projects["FirstProject"] = 50000;
	Manager me(1, "Kate Malysheva", 0.2, "FirstProject");

	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(10000, me.getPayment());
}
TEST(projectmanager, task7) {
	Projects["FirstProject"] = 50000;
	ProjectManager me(1, "Kate Malysheva", 0.2, "FirstProject", 1000, 2);
	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(12000, me.getPayment());
}
TEST(seniormanager, task7) {
	Projects["FirstProject"] = 50000;
	Projects["SecondProject"] = 30000;
	Projects["ThirdProject"] = 100000;
	Projects["FourthProject"] = 500000;

	SeniorManager me(1, "Kate Malysheva", 0.1, 1000, 29);
	me.setTime(40);
	me.CalcPayment();
	EXPECT_EQ(97000, me.getPayment());
}