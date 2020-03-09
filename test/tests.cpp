#include "gtest/gtest.h"
#include "Project.h"
#include "WorkTime.h"
#include "Heading.h"
#include "Engineer.h"
#include "Employee.h"
#include "Manager.h"
#include "Personal.h"
#include "CompanyCreation.h"

TEST(test1, CleanerIDTest)
{
	CompanyCreation* company = new CompanyCreation();
	Employee* cleaner = company->addEmployee(1, "Cleaner", "Oliver", 40, 50, 0);

	EXPECT_EQ(cleaner->getID(), 1);
}

TEST(test2, DriverIDTest)
{
	CompanyCreation* company = new CompanyCreation();
	Employee* driver = company->addEmployee(2, "Driver", "Mark", 50, 50, 0);

	EXPECT_EQ(driver->getID(), 2);
}

TEST(test3, TeamLeaderPaymentTest) 
{
	CompanyCreation* company = new CompanyCreation();
	Employee* teamLeader = company->addEmployee(3,"TeamLeader", "Paul", 50, 800, 0);
	
	teamLeader->calcPayment(9, 40000, 300);
	EXPECT_EQ(teamLeader->getPayment(), 43600);
}

TEST(test4, TesterPaymentTest) 
{
	CompanyCreation* company = new CompanyCreation();
	Employee* tester = company->addEmployee(4, "Tester", "Cory", 40, 500, 0);

	tester->calcPayment(5, 30000);
	EXPECT_EQ(tester->getPayment(), 21500);
}