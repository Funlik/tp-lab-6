#include "gtest/gtest.h"
#include "Cleaner.h"
#include "Driver.h"
#include "Project.h"
#include "Manager.h"
#include "ProjectManager.h"
#include "Engineer.h"
#include "Programmer.h"
#include "TeamLeader.h"
#include "Factory.h"

TEST(GroupTests, checkCreatedGroup) {
	Factory* factory = new Factory();
	std::string line = "1;Игорь;cleaner;10;20;0;0";
	factory->createEmployee(line);
	factory->countPaymentForStaff();
	Employee* emp = factory->getEmployeeByID("1");
	EXPECT_EQ(200, emp->getPayment());
}