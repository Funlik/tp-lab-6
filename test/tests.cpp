#include "gtest/gtest.h"
#include "Employees.h"

TEST(testPersonal, id) {
	Driver driver(12, "name", "Driver", 15);
	EXPECT_EQ(12, driver.GetId());
}

TEST(testPersonal, payment) {
	Driver driver(12, "name", "Driver", 15);
	driver.AddDone();
	EXPECT_EQ(15, driver.CalcPay());
}

TEST(testPersonal, name) {
	Driver driver(12, "name", "Driver", 15);
	EXPECT_EQ("name", driver.GetName());
}

TEST(testProgrammer, payment) {
	Project project("project", 0.0003, 0.00034, 0.0006);
	project.SetBudget(70000);
	Programmer programmer(12, "name", "Programmer", 25, &project);
	programmer.AddDone();
	EXPECT_EQ(48, programmer.CalcPay());
}

TEST(testSeniorManager, payment) {
	Project project("Main", 0, 0, 0);
	project.SetBudget(0);
	SeniorManager manager(12, "name", "SeniorManager", 80, &project, 14);
	manager.AddDone();
	EXPECT_EQ(224, manager.CalcPay());
}